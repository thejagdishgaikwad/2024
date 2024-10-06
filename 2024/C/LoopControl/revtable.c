#include<stdio.h>
#include<math.h>
    int main(){
        int i, no, table;
            printf("Enter Table : ");
            scanf("%d", &table);

            printf("Enter I :  ");
            scanf("%d", &i);

                printf("Enter No : ");
                scanf("%d", &no);

            for(i; i>=no; i--){
                printf("Table : %d\n", i*table);
            }
        return 0;
    }