#include<stdio.h>
    #include<math.h>
        int main(){
            char i,j;
            j = 'z';

                printf("Enter the value of i : ");
                scanf("%c", &i);

                while(j<=i && i<='z'){
                    printf("%c\n", j);
                    j++;
                } 
        return 0;
        }