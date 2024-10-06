#include<stdio.h>
#include<math.h>
    int main(){
        int initial, condn;

            printf("Enter I : ");
            scanf("%d", &initial);

                printf("Enter the condn : ");
                scanf("%d", &condn);

            for(initial; initial>=condn; initial = initial-5 ){
                printf("Integers : %d\n", initial);
            }
        return 0;
    }