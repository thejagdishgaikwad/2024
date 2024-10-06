#include<stdio.h>
    #include<math.h>

        int main(){
            char a, alphabet ='a';

                printf("Enter the character : ");
                scanf("%c", &a);

            while(a>=alphabet && a<='z'){
                printf("Alphabet : %c\n", a);
                a++;
            }
        return 0;
        }