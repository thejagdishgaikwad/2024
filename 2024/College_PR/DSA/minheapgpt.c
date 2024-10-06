#include <stdio.h>
//8#include <stdlib.h> // For system("cls")

int main() {
    int a[20], i, j, t_no, pos, n;

    // system("cls"); // Uncomment if you want to clear the screen

    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &t_no);

    for (j = 1; j <= t_no; j++) {
        printf("\n Enter New Element: ");
        scanf("%d", &n);
        pos = j;

        // Insert the new element into the heap
        while ((pos > 1) && (a[pos / 2] > n)) {
            a[pos] = a[pos / 2];
            pos = pos / 2;
        }

        a[pos] = n;
        printf("\n Heap: \n");
        for (i = 1; i <= j; i++) {
            printf("\t %d ", a[i]);
        }
        printf("\n");
    }

    // getchar(); // Uncomment if you want to wait for a key press
    return 0;
}
