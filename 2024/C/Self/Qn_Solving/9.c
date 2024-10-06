//do while
#include<stdio.h>
#include<math.h>
    int main(){
        int initial, condn;

            printf("Enter I : ");
            scanf("%d", &initial);

            printf("Enter Condn : ");
            scanf("%d", &condn);

        do {
            printf("Integers : %d\n", initial);
            initial+=5;
        }
        while(initial<=condn);
    return 0;
    }