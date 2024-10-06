#include<stdio.h>
#include<math.h>
    int main(){

            int initial, final, condn;

                printf("Enter Initial : ");
                scanf("%d", &initial);

                printf("Enter the condn : ");
                scanf("%d", &condn);

                for(initial ; initial<= condn ; initial--)//rows
                {
                    for(final=1 ; final<=initial; final--) //columns
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            return 0;
    }