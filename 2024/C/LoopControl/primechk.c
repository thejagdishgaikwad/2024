#include<stdio.h>
#include<math.h>
    int main(){
        int no;

            printf("Enter No : ");
            scanf("%d", &no);

            if(no%2!=0 && no%no==0){
                printf("The number is prime!\n");
            }
            else{
                printf("Not a prime number!\n");
            }
        return 0;
    }