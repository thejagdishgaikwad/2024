#include<stdio.h>
#include<math.h>
    int main(){
        int is_monday, is_raining;

        printf("is_monday : ");
        scanf("%d", &is_monday);

            printf("is_raining : ");
            scanf("%d", &is_raining);

        printf("True Or False : %d\n", is_monday || is_raining);
        return 0;
    }