#include<stdio.h>
#include<math.h>
    int main(){
        int i, no;

            printf("Enter the initial : ");
            scanf("%d", &i);

                printf("Enter the final no : ");
                scanf("%d", &no);

                for(i; i<=no ; i++){
                    if(i==6){
                        continue;;
                    }
                    printf("Numbers : %d\n", i);
                }
            printf("Thanks!\n");
        return 0;
    }