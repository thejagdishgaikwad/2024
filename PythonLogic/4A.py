def common_element(list1, list2):
    result : False
    for i in list1:
        for j in list2:
            if i==j:
                result = True
                return result 
print(common_element([12, 25, 33, 47, 50], [50, 60, 70, 80, 90]))
print(common_element([11, 22, 33, 34, 55], [66, 77, 88, 99]))
