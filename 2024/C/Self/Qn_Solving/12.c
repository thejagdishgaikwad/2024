// wap to print reverse of its number and their sum!
#include<stdio.h>
#include<math.h>
    int main(){
        int i, no, sum=0; //i = initialisation , no = condn, sum = sum from lower limit to upper limit;

            printf("Enter I : "); // as we are doing reverse print, higher limit to lower. Please enter greater input value as initial value
            scanf("%d", &i);

                printf("Enter Condn : "); // and smaller input value as higher limit, as compiler goes from low to high!
                scanf("%d", &no);

            for (i; i>=no ; i--){
                sum += i;
                printf("Reverse : %d\n", i);
            }
        printf("SUM : %d\n", sum);
        return 0;
    }