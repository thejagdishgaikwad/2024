#include<stdio.h>
#include<math.h>
    int main(){
        int i,j,no;

        printf("Enter No OF Rows : ");
        scanf("%d", &no);

            for(i=1; i<=no; i++){
                
                for(j=1; j<=i; j++){
                    printf("%d ", j);
                }
                printf("\n");
            }
        return 0;
    }