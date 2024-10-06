/*wap to print
1
12
123
1234
12345 pattern using nested loop*/

    #include<stdio.h>
    #include<math.h>
        int main(){
            int i, j, no;

                printf("Enter I : ");
                scanf("%d", &i);

                    printf("Enter J : ");
                    scanf("%d", &j);

                        printf("Enter Condn : ");
                        scanf("%d", &no);

                for (i; i<=no; i++){
                        j=1;
                    for(j ; j<=i; j++){
                        printf("%d", j);
                    }
                printf("\n", i);
                }
            return 0;
        }