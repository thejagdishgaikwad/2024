//wap to print odd numbers from 5 to 50
#include<stdio.h>
#include<math.h>
    int main(){
        int i , no;

            printf("Enter I : ");
            scanf("%d", &i);

                printf("Enter Condn : ");
                scanf("%d", &no);

            for (i ; i<= no ; i++){
                if (i%2 == 0){
                    continue;
                }
                printf("Odd No's : %d\n", i);
            }
        return 0;
    }