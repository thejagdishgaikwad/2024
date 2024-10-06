#include<stdio.h>
#include<math.h>
    int main(){
        char a, alphabet = 'a';

            printf("Enter Char : ");
            scanf("%c", &a);

            for(alphabet; a>=alphabet && a<= 'z'; a++){
                printf("Alphabet : %c\n", a);
            }
        return 0;
    }