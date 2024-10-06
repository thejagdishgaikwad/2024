#include <stdio.h>

// Function to perform linear search
void search(int a[], int n, int value) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found in the array\n");
}

int main() {
    int a[100], n, i, value;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the %d element of an array: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &value);

    search(a, n, value);

    return 0;
} 