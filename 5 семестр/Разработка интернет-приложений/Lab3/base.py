import requests


class VkRequest:
    # URL vk api
    BASE_URL = 'https://api.vk.com/method/'
    # метод vk api
    method = None
    # GET, POST, ...
    http_method = None
    parameters = ()

    # Получение GET параметров запроса
    def get_params(self):
        return self.parameters

    # Получение данных POST запроса
    def get_json(self):
        return self.response.json()

    # Получение HTTP заголовков
    def get_headers(self):
        return self.response.headers

    # Склейка url
    def generate_url(self, method):
        return '{0}{1}'.format(self.BASE_URL, method)

    # Отправка запроса к VK API
    def _get_data(self, method, http_method):
        try:
            if http_method == 'get':
                self.response = requests.get(self.generate_url(method), params=self.get_params())
        except ConnectionError:
            print('Неудачная попытка отправки запроса')
        else:
            return self.response_handler(self.response)

    # Обработка ответа от VK API
    def response_handler(self, response):
        return response

    # Запуск клиента
    def execute(self):
        return self._get_data(
            self.method,
            http_method=self.http_method
        )
