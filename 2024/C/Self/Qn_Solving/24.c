/* wap to print star pattern using nested loop
*****
*****
*****
*****
*/
#include<stdio.h>
#include<math.h>
    int main(){
        int i, j , no;
        char character;

            printf("Enter any character : ");
            scanf("%c",&character);

                printf("Enter initialisation : ");
                scanf("%d", &i);

                printf("Enter No of colmns : ");
                scanf("%d", &j);

                printf("Enter No of Rows : ");
                scanf("%d", &no);

            for ( i ; i<=no ; i++){
                j=1;
                    for( j ; j<=5 ; j++){
                        printf("%c", character);
                    }
                printf("\n", i);
            }
        return 0;
    }