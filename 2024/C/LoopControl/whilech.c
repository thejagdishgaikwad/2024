#include<stdio.h>
#include<math.h>
    int main(){
        char Alphabet;
        char alp= 'a';

        printf("Enter Alpbhabet : ");
            scanf("%c",&Alphabet);

            while(Alphabet>=alp && Alphabet<='z'){
                printf("%c\n", Alphabet);
                Alphabet++;
            }
        return 0;
    }