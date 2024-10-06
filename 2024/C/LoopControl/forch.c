#include<stdio.h>
    #include<math.h>
    int main(){
        char a = 'a', b;

        printf("Enter Char Till You Want : "); 
            scanf("%c", &b);

        for(a; a<=b ; a++){
            printf("%c\n", a);
        }
    return 0;
    }