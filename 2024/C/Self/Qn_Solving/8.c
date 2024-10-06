//while loop
#include<stdio.h>
#include<math.h>
    int main(){
        int initial , condn;

        printf("Enter I : ");
        scanf("%d", &initial);

            printf("Enter Cond : ");
            scanf("%d", &condn);

        while (initial<=condn){
            printf("Integers : %d\n", initial);
            initial+=5;
        }
        return 0;
    }