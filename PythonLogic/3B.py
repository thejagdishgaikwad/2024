a=[1,1,2,3,5,8,13,21,34,55,89]
print('List Elements')
for number in a:
    print(number,end=' ')

print('\n Numbers less than 20 are:')
for number in a:
    if number<20:
        print(number)
