//wap to check entered alphabet is Upper case or lower case!
#include<stdio.h>
#include<math.h>
    int main(){
        char Alphabet;

            printf("Enter an Alphabet : ");
                scanf("%c", &Alphabet);

            if(Alphabet >='a' && Alphabet <= 'z'){
                printf("Lower Case Alphabet!\n");
            }
        else if (Alphabet >= 'A' && Alphabet <= 'Z'){
            printf("Upper Case Alphabet!\n");
        }
    else {
        printf("Invalid!\n");
    }
return 0;
    }