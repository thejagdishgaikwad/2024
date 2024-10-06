#include<stdio.h>
#include<math.h>
    int main(){
        int Integer;

        printf("Enter an Integer : ");
            scanf("%d", &Integer);

            if(Integer >= 0){
                printf("+ve Integer!\n");

                if(Integer/2 != 0){
                    printf("Even Integer!\n");

                }
                else{
                    printf("Odd Integer!\n");
                }
            }
        else("Negative Integer!");
    return 0;
    }