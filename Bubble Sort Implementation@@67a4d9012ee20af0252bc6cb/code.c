#include <stdio.h>
#include <stdlib.h>  // For malloc function

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // Print newline after the array
}

int main() {
    int n;
    scanf("%d", &n);  // Corrected scanf
    int *arr = (int*) malloc(n * sizeof(int));  // Dynamically allocate memory for the array

    if (arr == NULL) {  // Check if memory allocation was successful
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with an error code
    }

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);  // Call bubbleSort
    printArray(arr, n);  // Print the sorted array

    free(arr);  // Free dynamically allocated memory
    return 0;
}
