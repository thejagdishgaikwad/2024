#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, k, no;
        //i=initial of code and rows, j=leading spaces, k=integers printing, no=no of condn given;

            printf("Enter No : ");
            scanf("%d", &no);

                for( i=0; i<no ; i++){

                        for ( j=0; j<2*(no-i)-2; j++){
                            printf(" ", j);
                        }
                            for ( k=0; k<2*i+1; k++){
                                printf("%d ", k+1);
                            }
                printf("\n");
                }
        return 0;
    }