# Итератор для удаления дубликатов
class Unique(object):
    def __init__(self, items, ignore_case=False, **kwargs):
        # Нужно реализовать конструктор
        # В качестве ключевого аргумента, конструктор должен принимать bool-параметр ignore_case,
        # в зависимости от значения которого будут считаться одинаковые строки в разном регистре
        # Например: ignore_case = True, Aбв и АБВ разные строки
        #           ignore_case = False, Aбв и АБВ одинаковые строки, одна из них удалится
        # По-умолчанию ignore_case = False
        unique_items = []

        buf_items = items
        if not ignore_case:
            buf_items = [item.lower() for item in items]

        for i, item in enumerate(buf_items):
            if item not in unique_items:
                unique_items.append(items[i])

        self.items = items
        self.unique_items = unique_items
        self.index = 0

        pass

    def __next__(self):
        # Нужно реализовать __next__

        if self.index == len(self.unique_items):
            raise StopIteration
        else:
            item = self.unique_items[self.index]
            self.index = self.index + 1
            return item

        pass

    def __iter__(self):
        return self
