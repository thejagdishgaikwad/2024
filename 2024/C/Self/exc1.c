#include<stdio.h>
    #include<math.h>
        int main(){
            int is_sunday, is_snowing;

            printf("is_sunday : ");
            scanf("%d", &is_sunday);

                printf("is_snowing : ");
                scanf("%d", &is_snowing);

            printf("True or False : %d\n", is_snowing && is_sunday);
    return 0;
        }