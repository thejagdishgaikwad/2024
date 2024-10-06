#include<stdio.h>
#include<math.h>
    int main(){
        int no;

            do{
                printf("Enter a number : ");
                scanf("%d", &no);
                printf("Entered No : %d\n", no);

                    if(no%7==0){
                        break;
                    } 
            }while(1);
        printf("Thanks!\n");
        return 0;
    }