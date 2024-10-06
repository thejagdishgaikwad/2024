#include <stdio.h>

int main() {
    int a[20], i, j, t_no, pos, n;

    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &t_no);

    // Insert elements into the heap
    for (j = 1; j <= t_no; j++) {
        printf("\nEnter new element: ");
        scanf("%d", &n);
        pos = j;
        
        // Heap insertion logic (max-heap)
        while ((pos > 1) && (a[pos / 2 - 1] < n)) {
            a[pos - 1] = a[pos / 2 - 1];
            pos = pos / 2;
        }

        a[pos - 1] = n;

        // Print the heapś
        printf("\nHeap: \n");
        for (i = 0; i < j; i++) {
            printf("\t %d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
