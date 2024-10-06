#include<stdio.h>
    #include<math.h>

        int main(){
            int i, fact=1, no;

                printf("Enter I : ");
                scanf("%d", &i);

                    printf("Enter N : ");
                    scanf("%d", &no);

                for(i; i<= no; i++){
                    fact*=i;
                    printf("Factorial : %d\n", fact);
                }
            return 0;
        }