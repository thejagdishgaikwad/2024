#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int index) {
    if (index < 0 || index > *size) {
        printf("Invalid index\n");
        return;
    }
    
    // Shift elements to make space for the new element
    for (int i = *size - 1; i >= index; --i) {
        arr[i + 1] = arr[i];
    }
    
    // Insert the element at the specified index
    arr[index] = element;
    
    // Increment the size of the array
    *size = *size + 1;
}

int main() {
    int arr[20] = {1, 3, 5, 7, 9};
    int size = 5; // current size of the array
    int element, index;
    
    printf("Current array: ");
    printArray(arr, size);
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);
    
    insertElement(arr, &size, element, index);
    
    printf("Array after insertion: ");
    printArray(arr, size);
    
    return 0;
}
