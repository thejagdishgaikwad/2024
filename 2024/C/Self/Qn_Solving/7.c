//infinity Loop Example
#include<stdio.h>
#include<math.h>
    int main(){
        int initial, condn;

            printf("Enter I : ");
            scanf("%d", &initial);

            printf("Enter Condn : ");
            scanf("%d", &condn);

        for (initial; initial = condn ; initial++){
            printf("%d\n", initial);
        }
    return 0;
    }