#include<stdio.h>
#include<math.h>
    int main(){
        int Integer;

        printf("Enter An Integer : ");
        scanf("%d", &Integer);

        Integer>=0? printf("Positive Integer!\n") : printf("Negative Integer!");
    return 0;
    }