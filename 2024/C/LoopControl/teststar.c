#include<stdio.h>
#include<math.h>

    int main(){
        int i, n, j;

            printf("Enter N : ");
            scanf("%d", &n);

            for(i=0; i<=n ; i++){
                  for(j=n ; j>=i; j--){
                        printf("\n");
                    }
                printf("*", i+n);
            }
            return 0;
    }