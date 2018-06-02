from base import *


class GetUser(VkRequest):
    method = 'users.get'
    http_method = 'get'

    def __init__(self, username):
        self.parameters = (('user_ids', username), ('fields', 'bdate'))
