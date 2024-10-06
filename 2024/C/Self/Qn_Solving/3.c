#include<stdio.h>
#include<math.h>
    int main(){
        int initial, condn, updatation;

            printf("Enter the I : ");
            scanf("%d", &initial);

                printf("Enter the condn : ");
                scanf("%d", &condn);

                   // printf("Enter the Updation : ");

                for(initial; initial<=condn; initial= initial+20){
                    printf("Integers: %d\n", initial);
                }
            return 0;
    }