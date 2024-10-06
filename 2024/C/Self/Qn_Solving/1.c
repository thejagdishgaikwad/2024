#include<stdio.h>
#include<math.h>
    int main(){
        int i,fn, store;

            printf("Enter the I : ");
            scanf("%d", &i);

                printf("Enter the FN : ");
                scanf("%d", &fn);
store = 0;
            for(i ; i<=fn ; i++){
                printf("%d\n", i);
                                store = store + i;
            }
            printf("Sum : %d\n", store);
        return 0;
    }