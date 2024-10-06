/*wap to print
          A
        A B
      A B C
    A B C D
  A B C D E
A B C D E F*/

#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, no, k;
        char alp;

            printf("Enter Character : ");
            scanf("%c", &alp);

                printf("Enter No : ");
                scanf("%d", &no);

                for ( i=0; i<no; i++){
                    
                        for ( j=0; j<2*(no-i)-2; j++){
                            printf(" ");
                        }
                    for ( k=0; k<=i; k++){
                        printf("%c ", alp + k);
                    }
                    printf("\n");
                }
            return 0;
    }