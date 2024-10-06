//wap to print factorial of a no
#include<stdio.h>
#include<math.h>
    int main(){
        int i , no, sum=1;

            printf("Enter No : ");
            scanf("%d", &no);

            for(i=1; i<=no ; i++){
                sum *= i;
            }
            printf("Factorial : %d\n", sum);
        return 0;
    }