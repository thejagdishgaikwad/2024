//wap to get values from user untill user enters multipless of 7
#include<stdio.h>
#include<math.h>
    int main(){
        int no;

            do{
                printf("Enter the No : ");
                scanf("%d", &no);

                    printf("The Current Value of No : %d\n", no);

                    if(no%7 == 0){
                        break;
                    }
                
            }while(1);
            printf("Thanks!\n");
        return 0;
    }