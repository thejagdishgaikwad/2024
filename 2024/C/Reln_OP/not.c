#include<stdio.h>
#include<math.h>
    int main(){
        int a,b;

        printf("Enter the Value of A : ");
        scanf("%d",&a);

            printf("Enter the Value of B : ");
            scanf("%d", &b);

            printf("True Or False : %d", !(a*b == 4));
        return 0;
    }