#include<stdio.h>
#include<math.h>
    int main(){
        int i, no;

            printf("Enter 5 : ");
            scanf("%d", &i);

                printf("Enter 50 : ");
                scanf("%d",&no);

            for(i; i<=no ;i++){
                if(i%2!=0){
                    printf("Numbers : %d\n", i);
                }
            }
        return 0;
    }