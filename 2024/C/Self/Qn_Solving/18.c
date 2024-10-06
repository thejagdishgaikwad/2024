#include<stdio.h>
#include<math.h>
    int main(){
        int i , no;

            printf("Enter I : ");
            scanf("%d", &i);

                printf("Enter Condn : ");
                scanf("%d", &no);

            for (i ; i<=no ; i++){
                if (i == 3 || i == 9){
                    continue;
                }
                printf("Integers : %d\n", i);
            }
        return 0;
    }