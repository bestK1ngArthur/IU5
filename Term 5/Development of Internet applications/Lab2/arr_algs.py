
def min(list):
    min_element = list[0]
    for element in list:
        if element < min_element:
            min_element = element
    return min_element


def mid(list):
    sum = 0
    for element in list:
        sum += element
    return sum / len(list)


print(min([1, 23, 0, 6]))
print(mid([1, 23, 0, 6]))
