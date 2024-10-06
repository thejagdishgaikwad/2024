#include<stdio.h>
#include<math.h>
    int main(){
        int i, no;

            printf("Enteer I : ");
            scanf("%d", &i);

                printf("Enter No : ");
                scanf("%d", &no);

            for(i; i<=no ; i++){
                if(i==5){
                    break;
                }
                printf("I KI VALUE : %d\n", i);
            }
            printf("END!\n");
        return 0;
    }