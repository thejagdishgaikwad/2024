n=int(input("Enter a number : "))
revNo=0
while n>0:
    d=n%10
    revNo=revNo*10+d
    n=int(n/10)
print("Reverse number = ",revNo)
