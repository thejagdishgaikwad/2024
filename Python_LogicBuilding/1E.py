def armstrong(n):
    newNo=n
    sum=0
    while n>0:
        d=n%10
        sum=sum+d*d*d
        n=int(n/10)
    if newNo == sum:
        print(newNo,"Is armstrong!\n")
    else:
        print(newNo, "is Not Armstrong!\n")

def palindrome(num):
    n=num
    rev=0
    while num!=0:
        rev=rev*10
        rev = rev+int(num%10)
        num = int(num/10)
    if n==rev:
        print(n, "Is Palindrome!\n")
    else :
        print(n, "Is not Palindrome!\n")


n= int(input("Enter A Number to Check For Armstrong : "))
armstrong(n)

n= int(input("Enter A Number TO Check For Palindrome : "))
palindrome(n)

        