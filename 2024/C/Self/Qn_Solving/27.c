#include<stdio.h>
#include<math.h>
    int main(){
        int i, no, j;
        //i = initial of row, j = no of columns, no = no of rows;
        char character;

            printf("Enter Character : ");
            scanf("%c", &character);

                printf("Enter I : ");
                scanf("%d", &i);

                printf("Enter No : ");
                scanf("%d", &no);

                for( i ; i<=no ; i++){

                    j=1;
                        for(j ; j<=i; j++){
                            printf("%c ", j+character);
                        }
                    printf("\n", i);
                }
            return 0;
    }