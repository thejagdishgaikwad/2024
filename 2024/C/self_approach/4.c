#include<stdio.h>
#include<math.h>
    int main(){
        int i, j, k, no; 
        char spc;

            printf("Enter Spc char : ");
            scanf("%c", &spc);

                printf("Enteer NO : ");
                scanf("%d", &no);

                    for ( i=0; i<no; i++){
                            
                            for ( j=0; j<2*(no-i)-2; j++){
                                printf(" ");
                            }
                                for ( k=0; k<2*i+1; k++){
                                    printf("%c ", spc);
                                }
                            printf("\n");
                    }
            return 0;
    }