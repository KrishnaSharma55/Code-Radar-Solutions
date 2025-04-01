#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle cases where k > n
    if (k == 0) return;  // No rotation needed

    reverse(arr, 0, n - 1);    // Step 1: Reverse entire array
    reverse(arr, 0, k - 1);    // Step 2: Reverse first k elements
    reverse(arr, k, n - 1);    // Step 3: Reverse remaining elements
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n, k;
    
    // Input size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input K (rotation count)
    scanf("%d", &k);
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Print rotated array
    printArray(arr, n);

    return 0;
}
