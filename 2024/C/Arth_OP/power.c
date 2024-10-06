#include<stdio.h>
#include<math.h>
    int main(){
        int a, b, power;

        printf("Enter A :");
        scanf("%d", &a);

            printf("Enter B : ");
            scanf("%d", &b);

            power = pow(a,b);
            printf("Power : %d", power);
            return 0;
    }