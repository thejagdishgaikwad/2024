#include<stdio.h>
#include<math.h>
    int main(){
        int N,i,Fn;

            printf("Enter the Initialisation : ");
            scanf("%d", &i);

                printf("Enter the final no : ");
                scanf("%d", &Fn);

            for(i; i<Fn; i=i+2){ //increment using i variable
                printf("%d\n", i);
            }
        return 0;
    }