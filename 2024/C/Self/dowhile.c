#include<stdio.h>
#include<math.h>
    int main(){
        int i, fn;

            printf("Enter the initialisation : ");
            scanf("%d", &i);

                printf("Enter the Final Output : ");
                scanf("%d", &fn);

            do {
                printf("%d\n",i);
                i++;
            }
            while (i<=fn);

        return 0;
    }