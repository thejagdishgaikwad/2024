#include<stdio.h>
    #include<math.h>
//WAP Where A should be Greater than 9 and less than 100!
    int main(){
        int A;

        printf(" A : ");
        scanf("%d", &A);

        printf("True Or False : %d\n", (A<9) && (A<=100));
    return 0;
    }