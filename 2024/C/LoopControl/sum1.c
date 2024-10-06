#include<stdio.h>
#include<math.h>
    int main(){
        int i, no, sum=0, j;

            printf("Enter No :");
            scanf("%d", &i);

            printf("Enter No : ");
            scanf("%d", &no);

            for(i, j=no ;j>=1 && i<=no;j--, i++){
                sum+=i;
                printf("reverse : %d\n", j);
            }
            printf("Sum : %d\n", sum);
            return 0;
    }