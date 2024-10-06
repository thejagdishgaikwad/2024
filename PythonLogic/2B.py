def lenCount(str):
    count=0
    for i in str:
        count=count+1
    return count
str1=input('Enter a string:')
print('Length of',str1,'=',lenCount(str1))
