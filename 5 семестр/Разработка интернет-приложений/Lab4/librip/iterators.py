# Итератор для удаления дубликатов
class Unique(object):
    def __init__(self, items, ignore_case=False, **kwargs):
        # Нужно реализовать конструктор
        # В качестве ключевого аргумента, конструктор должен принимать bool-параметр ignore_case,
        # в зависимости от значения которого будут считаться одинаковые строки в разном регистре
        # Например: ignore_case = True, Aбв и АБВ разные строки
        #           ignore_case = False, Aбв и АБВ одинаковые строки, одна из них удалится
        # По-умолчанию ignore_case = False
        self.unique_items = []
        self.ignore_case = ignore_case
        self.items = iter(items)

        pass

    def __next__(self):
        # Нужно реализовать __next__

        while True:
            item = self.items.__next__()
            check_item = None

            if self.ignore_case and type(item) is str:
                check_item = item.lower()
            else:
                check_item = item

            if check_item not in self.unique_items:
                self.unique_items.append(check_item)
                return item


    def __iter__(self):

        return self
