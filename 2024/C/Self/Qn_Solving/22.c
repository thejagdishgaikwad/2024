//wap to calculate sum of all numbers from 5 to 50 including 5 and 50
#include<stdio.h>
#include<math.h>
    int main(){
        int a , b, sum = 0;

            printf("Enter A : ");
            scanf("%d", &a);

                printf("Enter B : ");
                scanf("%d", &b);

            for (a ; a<=b ; a++){
                sum += a;
            }
        printf("Sum : %d\n", sum);
    return 0;
    }