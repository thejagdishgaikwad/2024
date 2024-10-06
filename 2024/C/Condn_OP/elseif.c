#include<stdio.h>
#include<math.h>
    int main(){
        int marks;

        printf("Enter Marks : ");
        scanf("%d", &marks);

        if(marks >=80 && marks <=100){
            printf("Get Him Shoes!\n");
        }
        else if(marks>=60 && marks<=40){
            printf("Get Him A Chocolate!\n");
        }
            else if(marks>= 40 && marks <= 20){
                printf("Make Him Study Well!\n");
            }
            else if(marks<20 && marks>=0){
                printf("He Need Slap And Serious Attention to Studies!\n");
            }
                else{
                    printf("Invalid!");
                }
        return 0;
    }