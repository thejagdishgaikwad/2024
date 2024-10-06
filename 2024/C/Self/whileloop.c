#include<stdio.h>
#include<math.h>
    int main(){
        int fn, i;

            printf("Enter Initialisation : ");
            scanf("%d", &i);

                printf("Enter Final Output : ");
                scanf("%d", &fn);

            while (i<=fn){
                printf("%d\n", i);
                i++;
            }
        return 0;
    }