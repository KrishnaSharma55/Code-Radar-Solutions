#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) { // If any element is smaller than the previous one
            return 0; // Array is not sorted
        }
    }
    return 1; // Array is sorted
}

int main() {
    int n;
    
    // Input number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if sorted and print result
    if (isSorted(arr, n)) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
