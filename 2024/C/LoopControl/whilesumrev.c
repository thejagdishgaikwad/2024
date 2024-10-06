#include<stdio.h>
#include<math.h>
    int main(){
        int initial, sum, condn, no;

                printf("Enter Sum : ");
                scanf("%d", &sum);

                    printf("Enter Initial : ");
                    scanf("%d", &initial);

                        printf("Enter No : ");
                        scanf("%d", &no);
            condn=no;
                    while(initial>= no && condn<=1){
                        sum+=initial;
                        printf("Reverse : %d\n", condn);
                        initial++;
                        condn--;
                    }
                printf("Sum : %d\n", sum);
            return 0;
    }