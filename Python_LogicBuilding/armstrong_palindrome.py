def armstrong(n):
    newNo=n
    sum=0
    while n>0:
        d=n%10
        sum=sum+d*d*d
        n=int(n/10)
    if newNo==sum:
            print(newNo,"is armstrong")
    else:
         print(newNo,"is not armstrong")  
         
n=int(input("enter a number to check for armstrong:"))
armstrong(n)