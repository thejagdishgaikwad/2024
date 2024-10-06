#include<stdio.h>
#include<math.h>
    int main(){
        float initial, condn;

        printf("Enter I : ");
        scanf("%f", &initial);

            printf("Enteer Condn : ");
            scanf("%f", &condn);

        for (initial ; initial<= condn ; initial+=0.5){
            printf("%.1f\n", initial); //.2 states the outputs decimal place, like we can get output value till the decimal point we want! if we want it till 4 decimals? just put %.4f
        }
    return 0;
    }