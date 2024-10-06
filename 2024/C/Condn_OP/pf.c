//wap to check student is pass or fail! marks>30 is pass and marks<=30 is fail!

    #include<stdio.h>
    #include<math.h>
        int main(){
            int marks;

            printf("Enter Marks : ");
                scanf("%d", &marks);

            marks<=99 && marks>30? printf("Passed!\n"):printf("Failed!\n");
            return 0;
        }