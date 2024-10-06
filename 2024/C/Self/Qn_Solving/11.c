#include<stdio.h>
#include<math.h>
    int main(){
        int i , no, j, sum=0; //i = initialisation , no = condn , j = no (reverse using upper limit of "no"), sum = printing sum

            printf("Enter I : ");
            scanf("%d", &i);

                printf("Enter Condn : ");
                scanf("%d", &no);

            for(i , j=no ; i<=no && j>=1 ; i++, j--){
                printf("Integers : %d\n", i);
                sum += i;
                printf("Reverse Integers : %d\n", j);
            }
        printf("Sum : %d\n", sum);
    return 0;
    }