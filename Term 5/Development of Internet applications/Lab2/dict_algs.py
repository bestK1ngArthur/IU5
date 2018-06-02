
ivan = {'name': "ivan",
        'age': 34,
        'children': [{"name": "vasja", "age": 12},
                     {"name": "petja", 'age': 10}]}

darja = {'name': "darja",
         'age': 41,
         'children': [{"name": "kirill", "age": 21},
                      {"name": "pavel", "age": 15}]}

emps = [ivan, darja]

for emp in emps:
    has_children = False
    children = emp['children']
    for child in children:
        age = child['age']
        if age > 18:
            has_children = True
            break
    if has_children:
        print(emp['name'])
