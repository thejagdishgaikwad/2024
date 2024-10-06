#include<stdio.h>   
    #include<math.h>
        int main(){
            float a=1.2 ,b;

                printf("Enter the vlue : ");
                scanf("%f", &b);

            for(a;  a>=b && a<=100; a=a+0.5){
                printf("The value : %f\n", a);

            }
        return 0;
        }