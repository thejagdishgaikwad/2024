#include<stdio.h>
#include<math.h>
    int main(){
        int n;
        printf("Enter N : ");
        scanf("%d", &n);

        int sum = 0;
        for(int i=1, j=n; i<=n && j>=1;j--, i++){
            sum+=i;
            printf("Reverse : %d\n", j);
        }
        printf("Sum : %d\n", sum);

        /*for(int i=n; i>=1; i--){
            printf("rev : %d\n", i);
        }*/
    return 0;

    }