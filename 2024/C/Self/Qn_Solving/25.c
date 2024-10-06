//wap to print prime no of a range a to b
#include<stdio.h>
#include<math.h>
    int main(){
        int i, no;

            printf("Enter A : ");
            scanf("%d", &i);

                printf("Enter B : ");
                scanf("%d", &no);

            for (i ; i<=no ; i++){

                if(i % 2 != 0){
                printf("%d\n", i);
                }
            }
        return 0;
    }