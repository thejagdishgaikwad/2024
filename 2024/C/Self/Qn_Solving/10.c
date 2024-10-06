#include<stdio.h>
#include<math.h>
    int main(){
        int i, sum=0, no, j;

            printf("Enter Initialisation : ");
            scanf("%d", &i);

                printf("Enter Condn : ");
                scanf("%d", &no);

            for (i, j=no ; i<=no && j>=1 ;i++, j--){
                sum += i;
                printf("Reverse : %d\n", j);
            }
        printf("Sum : %d\n", sum);
    return 0;
    }