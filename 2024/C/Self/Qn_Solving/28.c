#include<stdio.h>
//#include<math.h>
    int main(){
        int k, j;
        int i=0, no = 5;

        for(i; i<no; i++){
            for(j=0; j < 2 * (no -i)-2 ; j++){
                printf(" ");
            }
            for(k=0; k<=i; k++){
                printf("%d ", k + 1);
            }
            printf("\n", i);
        }
        return 0;
    }