#include<stdio.h>
    #include<math.h>
        int main(){
            int birth_date;

            printf("Enter Birth Date : ");
                scanf("%d", &birth_date);

            if (birth_date == 22){
                printf("Yess You Guess It Right!\n");
            }
                else{
                    printf("Wrong!\n");
                }
            return 0;
        }