//wap to get values from user untill a divides b, tottally user derived code!
#include<stdio.h>
#include<math.h>
    int main(){

        int a, b;

        do{
            printf("Enter A : ");
            scanf("%d", &a);

                printf("Enter B : ");
                scanf("%d", &b);

            printf("Present value of A : %d\n", a);
            printf("Present value of B : %d\n", b);

                if(a%b ==0){
                    break;
                }

        }while(1);
        printf("Thanks!\n");

    return 0;
    }