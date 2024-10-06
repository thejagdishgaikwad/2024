//wap to print table of number input by user 
#include<stdio.h>
#include<math.h>
    int main(){
        int i , no; // i = initial of table , no = final number till table will print

            printf("Enter I : ");
            scanf("%d", &i);

                printf("Enter Condn : ");
                scanf("%d", &no);

            for(i ; i<=no ; i++){
                printf("Multiples of 2 : %d\n", 2*i);
            }
        return 0;
    }