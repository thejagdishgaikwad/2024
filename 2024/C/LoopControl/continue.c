#include<stdio.h>
#include<math.h>
    int main(){
        int i, no;

            printf("Enter the value of i : ");
            scanf("%d", &i);

                printf("Enter the value of no : ");
                scanf("%d", &no);

            for(i; i<=no ; i++){
                if(i==5){
                    continue;
                }
                printf("I ki value :%d\n", i);
            }
        printf("END!\n");
        return 0;
    }