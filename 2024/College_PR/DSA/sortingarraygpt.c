#include<stdio.h>

void main() {
    int n1, n2, n3, i, j;
    int a[10], b[10], c[20];

    printf("Enter size of the first array (max 10): ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array: \n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array (max 10): ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array: \n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    n3 = n1 + n2;  // Total size of merged array

    // Copy elements of first array into merged array
    for (i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    // Copy elements of second array into merged array
    for (i = 0; i < n2; i++) {
        c[i + n1] = b[i];
    }

    // Sorting the merged array
    for (i = 0; i < n3; i++) {
        int temp;
        for (j = i + 1; j < n3; j++) {
            if (c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nFinal array after sorting: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }

    // Wait for user input before closing
    getchar();
}
