n1=0
n2=1
n=int(input("Enter a Number:"))
print(n1)
#print(n2)
for i in range(2,n):
    n3=n1+n2
    print(n3)
    n1=n2
    n2=n3
