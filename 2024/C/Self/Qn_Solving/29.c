#include<stdio.h>
#include<math.h>
    int main(){
        int i=0, j=0, k=0, no=5;

        for(i; i< no; i++){
            for(j=0; j<2*(no-i)-2 ; j++){
                printf(" ");
            }
            for (k=0; k<=i; k++){
                printf("%c ", 'A' + k);
            }
            printf("\n");
        }
    return 0;
    }