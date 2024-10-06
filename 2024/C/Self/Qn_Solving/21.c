//wap to print reverse table of n
#include<stdio.h>
#include<math.h>
    int main(){
        int i=1, no;

            printf("Enter Condn : ");
            scanf("%d", &no);

            for(no; no>=i ;no--){
                printf("Multiple Of  2 : %d\n", no * 2);
            }
        return 0;
    }