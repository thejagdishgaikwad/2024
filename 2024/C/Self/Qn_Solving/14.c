//wap to get value till 4 and exxit loop using break statement
    #include<stdio.h>
    #include<math.h>
        int main(){
            int i, n;

                printf("Enter the i : ");
                scanf("%d", &i);

                printf("Enter the Condn : ");
                scanf("%d", &n);

            for (i ; i<=n ; i++){
                if(i==4){
                    break;
                }
                printf("Value of I : %d\n", i);
            }
        printf("End!\n");
        return 0;
        }