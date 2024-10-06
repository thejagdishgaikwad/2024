#include<stdio.h> 
    #include<math.h>

        int main(){
            int initial, Table, no;

                printf("Enter Initialisation : ");
                scanf("%d", &initial);

                    printf("Enter No : ");
                    scanf("%d", &Table);

                        printf("Enter Final : ");
                        scanf("%d", &no);

                for(initial; initial<=no; initial++){
                    printf("Table : %d\n", initial*Table);
                }
            return 0;
        }