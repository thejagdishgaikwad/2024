#include<stdio.h>
#include<math.h>
    int main(){
        int i, no, sum=0;

            printf("Enter 5 : ");
            scanf("%d", &i);

                printf("Enter 55 : ");
                scanf("%d", &no);

            for(i ; i<=no ; i++){
                sum+=i;
                printf("Sum : %d\n", sum);
            }
        return 0;
    }