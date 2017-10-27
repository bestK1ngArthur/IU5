import datetime
from get_friends import *
from get_user import *


def make_chart(friends):
    chart = {}

    for friend in friends:
        date_birth = friend['bdate']
        date = datetime.datetime.strptime(date_birth, '%d.%m.%Y')
        years = int((datetime.datetime.now() - date).days/365.25)

        if years in chart:
            chart[years] += 1
        else:
            chart[years] = 1
    return chart


def draw_chart(chart):
    keys = sorted(chart.keys())
    for i in keys:
        print("{}:{}".format(i, chart[i]*'#'))


def load_with_id(user_id):
    final_friends = []
    
    request = GetFriends(user_id)
    try:
        friends = request.execute().json()['response']
    except KeyError:
        print('Incorrect id or username')
    else:
        for friend in friends:
            if 'bdate' in friend:
                if len(friend['bdate'].split('.')) > 2:
                    final_friends.append(friend)

        chart = make_chart(final_friends)
        draw_chart(chart)


def load_with_username(username):

    request = GetUser(username)
    user = request.execute()
    try:
        user = user.json()['response']
    except KeyError:
        print('Incorrect id or username')
    else:
        user_id = user[0]['uid']
        load_with_id(user_id)
    

if __name__ == '__main__':
    user_input = input("Введите id: ")

    if user_input.isdigit():
        id = int(user_input)
        load_with_id(id)
    else:
        username = user_input
        load_with_username(username)
        
