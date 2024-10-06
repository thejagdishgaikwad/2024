#include<stdio.h>
#include<math.h>
    int main(){
        int i = 0, j =  1, no;
        char star;

            printf("Enter Star : ");
            scanf("%c", &star);

            printf("Enter No Of Rows : ");
            scanf("%d", &no);

            for( i; i<=no; i++){

                    for(j=0; j<=i; j++){
                        printf("%c ", star);
                    }
                printf("\n");
            }
        return 0;
    }