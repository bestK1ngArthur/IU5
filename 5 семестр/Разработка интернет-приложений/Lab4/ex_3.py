#!/usr/bin/env python3
import math

data = [4, -30, 100, -100, 123, 1, 0, -1, -4]
# Реализация задания 3
print(sorted(data, key=lambda i: math.fabs(i)))