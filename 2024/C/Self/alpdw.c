#include<stdio.h>
#include<math.h>
    int main(){
        char a, alphabet = 'a';

            printf("Enter the char : ");
            scanf("%c",&a);

        do{
            printf("Character : %c\n", a);
            a++;
        }
        while(a>=alphabet && a<='z');
    return 0;
    }