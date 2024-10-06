#include<stdio.h>
#include<math.h>
    int main(){
        int A;

            printf("Enter the value of A: ");
            scanf("%d",&A);

        printf("Pre Inc : %d\n", ++A);
        printf("Post Inc : %d\n", A++);
        printf("Post Dec : %d\n", A--);
        printf("Pre Dec : %d\n", --A );
        
        return 0;
    }