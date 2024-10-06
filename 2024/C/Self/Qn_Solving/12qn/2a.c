/*wap to print 
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5 */

#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, k, no;

            printf("Enter No : ");
            scanf("%d", &no);

                for ( i=0; i<no; i++){

                        for ( j=0; j<2*(no-i)-2 ; j++){
                            printf(" ");
                        }
                        for ( k=0; k<=i; k++){
                            printf("%d ",k+1);
                        }
                    printf("\n");
                }
            return 0;
    }