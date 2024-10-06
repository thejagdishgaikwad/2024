#include<stdio.h>
#include<math.h>
    int main(){
        int n,j,i=0,sum=0;

        printf("Enteer the number : ");
        scanf("%d", &n);

            for(i, j=n; i>=n && j<=1; i++,j--){
                printf("Reverse : %d\n", j);
                sum+=i;
            }
            printf("Sum : %d\n", sum);
            return 0;
    }