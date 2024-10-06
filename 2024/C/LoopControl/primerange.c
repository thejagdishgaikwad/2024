#include<stdio.h>
#include<math.h>
    int main(){
        int i, f;

            printf("Enter Initial : ");
            scanf("%d", &i);

                printf("Enter Final : ");
                scanf("%d", &f);

            for(i ; i<=f ; i++){
                if(i%2!=0 && i%i==0){
                    printf("Prime Numbers : %d\n", i);
                }
            }
        return 0;
    }