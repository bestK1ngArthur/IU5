#!/usr/bin/env python3
from librip.gens import gen_random
from librip.iterators import Unique

data1 = [1, 1, 1, 1, 1, 2, 2, 2, 2, 2]
data2 = ['A', 'a', 'b', 'B']
data3 = ['A', 'a', 'b', 'B']

# Реализация задания 2
for i in Unique(data1):
    print(i, end=" ")
print(" ")
for i in Unique(data2):
    print(i, end=" ")
print(" ")
for i in Unique(data3, ignore_case=True):
    print(i, end=" ")
print(" ")