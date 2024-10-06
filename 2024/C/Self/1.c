#include<stdio.h>
#include<math.h>
    int main(){
        int i,j,no,sum;

            printf("Enter a number: ");
            scanf("%d",&no);
                
                printf("Enter Sum : "); //put sum=0 always
                scanf("%d", &sum);

                    printf("Enter initialisation : "); //put i=1 always
                    scanf("%d", &i);

                for(i, j=no; i<=no && j>=1; i++, j--){
                    sum+=i;
                    printf("Reverse : %d\n", j);
                }
            printf("Sum : %d\n", sum);
        return 0;
    }