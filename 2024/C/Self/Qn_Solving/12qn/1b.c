#include<stdio.h>
#include<math.h>
    int main(){
        int i = 0, j = 0, no;
        char character;

            printf("Enter Character : ");
            scanf("%c", &character);

                printf("Enter Final No OF Char : ");
                scanf("%d", &no);

            for( i ; i<=no; i++){

                    for( j = 0; j<=i; j++){
                        printf("%c ", j+'A');
                    }
                printf("\n");
            }
        return 0;
    }