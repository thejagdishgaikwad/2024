#include<stdio.h>
#include<math.h>
    int main(){
            int i,j,no,sum;

            printf("Enter Sum :");
            scanf("%d",&sum);

                printf("Enter Initial : ");
                scanf("%d", &i);

                    printf("Enter No : ");
                    scanf("%d", &no);

                for(i, j=no; i<=no && j>=1; i++, j--){ //the biggest mistake every time persists in this code is assigning i=j instead of j=no and placing wrong conitional operator conditions!
                    sum+=i;
                    printf("Reverse : %d\n", j);
                }
            printf("Sum : %d\n", sum);
        return 0;
    }
