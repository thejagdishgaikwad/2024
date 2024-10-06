//wap to get values from user until user enters odd no.
#include<stdio.h>
#include<math.h>
    int main(){
        int n; 

          do {
            printf("Enter Value of N : ");
            scanf("%d", &n);
            printf("Value of N : %d\n", n);

                if(n%2 != 0){
                    break;
                }
          }while(1);

          printf("END!\n");

          return 0;
            

    }