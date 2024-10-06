#include<stdio.h>
#include<math.h>
    int main(){
        int no;

            printf("Enter the integer : ");
            scanf("%d", &no);

            do{
                printf("Enterr an integer : ");
                scanf("%d", &no);
                printf("Integer : %d\n", no);

                if(no%2!=0){
                    break;
                }
            }            while(1);
            printf("Thanks!\n");
            return 0;
    }