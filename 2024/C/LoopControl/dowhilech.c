#include<stdio.h>
    #include<math.h>
        int main(){
            char Alp = 'z';
            char Alphabet;

                printf("Enter Aplphabet : ");
                scanf("%c", &Alphabet);

            do{
                printf("%c\n", Alphabet);
                Alphabet ++;
            }
            while(Alphabet<=Alp && Alphabet<= 'z');
            return 0;
        }