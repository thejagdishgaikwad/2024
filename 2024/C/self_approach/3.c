#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, k, no;
        char alp;

            printf("Enter Alp : ");
            scanf("%c", &alp);

                printf("Enter No : ");
                scanf("%d", &no);

                    for ( i=0; i<no; i++){

                        for ( j=0; j<2*(no-i)-2; j++){
                            printf(" ", j);
                        }
                            for ( k=0; k<2*i+1; k++){
                                printf("%c ", k+alp);
                            }
                        printf("\n");
                    }
                printf("\n");
    }