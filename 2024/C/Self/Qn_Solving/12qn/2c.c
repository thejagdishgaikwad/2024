/*Wap to print 
        *
      * *
    * * *
    * * *
  * * * * 
* * * * * pattern
*/

#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, k, no;
        char character;

            printf("Enter An Character : ");
            scanf("%c", &character);

            printf("Enter No : ");
            scanf("%d", &no);

                for( i=0; i<no; i++){

                        for ( j=0; j<2*(no-i)-2; j++){
                            printf(" ");
                        }
                    for ( k=0; k<=i; k++){
                        printf("%c ", character);
                    }
                    printf("\n");
                }
            return 0;
    }