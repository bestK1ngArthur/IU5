from base import *


class GetFriends(VkRequest):
    method = 'friends.get'
    http_method = 'get'

    def __init__(self, user_id):
        self.parameters = (('user_id', user_id), ('fields', 'bdate'))
