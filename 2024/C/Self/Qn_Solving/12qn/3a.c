#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, k, no;
        i=0, j=0, k=0;
        char alp;
        printf("Enter alphabet : ");
        scanf("%c", &alp);
        
        printf("Enter No : ");
        scanf("%d", &no);

            for( i; i<no; i++){

                    for( j=0; j<2*(no-i)-2; j++){
                        printf(" ");
                    }
                    for( k=0; k<2*i+1; k++){
                        printf("%c ",alp + k);
                    }
                    printf("\n");
            }
        return 0;
    }