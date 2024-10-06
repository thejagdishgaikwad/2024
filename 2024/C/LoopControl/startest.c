#include<stdio.h>
#include<math.h>
    int main(){
        int i,j,no;

            printf("Enter I : ");
            scanf("%d", &i);

                printf("Enter Condn : ");
                scanf("%d", &no);

                    for(i; i<=no; i++){

                        for(j=1; j<=i ; j++){
                            printf("*");
                        }
                        printf("\n");
                    }
            return 0;
    }