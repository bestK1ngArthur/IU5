#!/usr/bin/env python3
import json
import sys
from librip.ctxmngrs import timer
from librip.decorators import print_result
from librip.gens import field, gen_random
from librip.iterators import Unique

# encoding=utf8


path = "/Users/bestK1ng/Code/Web/IU5/5 семестр/Разработка интернет-приложений/Lab4/data_light.json"

# Здесь необходимо в переменную path получить
# путь до файла, который был передан при запуске

with open(path, "r", encoding='utf8') as f:
    data = json.load(f)


# Далее необходимо реализовать все функции по заданию, заменив `raise NotImplemented`
# Важно!
# Функции с 1 по 3 дожны быть реализованы в одну строку
# В реализации функции 4 может быть до 3 строк
# При этом строки должны быть не длиннее 80 символов

@print_result
def f1(arg):
    jobs = list(field(arg, "job-name"))
    jobs = Unique(jobs, ignore_case=True)
    jobs = sorted(jobs)

    return jobs


@print_result
def f2(arg):
    jobs = list(filter(lambda x: "программист" in x.lower(), arg))

    return jobs


@print_result
def f3(arg):
    jobs = list(map(lambda x: x + "с опытом Python", arg))

    return jobs


@print_result
def f4(arg):
    jobs = list(arg)
    salaries = list(gen_random(100000, 200000, len(jobs)))
    salaries = list(map(lambda x: "зарплата " + str(x) + " руб.", salaries))

    full_info = list(zip(jobs, salaries))

    return full_info


with timer():
    f4(f3(f2(f1(data))))
