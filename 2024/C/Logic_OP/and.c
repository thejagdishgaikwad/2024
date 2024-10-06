#include<stdio.h>
#include<math.h>
    int main(){
        int a,b,c,d;

        printf("A : ");
        scanf("%d", &a);

            printf("B : ");
            scanf("%d", &b);

                printf("C : ");
                scanf("%d", &c);

                    printf("D : ");
                    scanf("%d", &d);

            printf("AB and CD : %d\n", (a*b != 8) && (c/d < 20) );
        return 0;
    }