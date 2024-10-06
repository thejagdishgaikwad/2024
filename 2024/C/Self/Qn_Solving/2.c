#include<stdio.h>
#include<math.h>
    int main(){
        int op1,op2;

            printf("Enter Op1 : ");
            scanf("%d", &op1);

                printf("Enter Op2 : ");
                scanf("%d", &op2);

            if (op1+10 == op2)
            {
                printf("True\n");
            }
            else {
                printf("False!\n");
            }
        return 0;
    }