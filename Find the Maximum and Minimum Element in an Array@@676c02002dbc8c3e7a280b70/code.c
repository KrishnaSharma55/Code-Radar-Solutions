#include<stdio.h>
int min(int arr[],int n){
    int j=arr[0]
    for (int i = 0; i < n; i++) {
        if(arr[i]>arr[i+1]){
            return arr[i];
        }
    }
}
int min(int arr[],int n){
    int j=arr[0]
    for (int i = 0; i < n; i++) {
        if(arr[i]>arr[i+1]){
            return arr[i];
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    min(arr,n);
    max(arr,n);
    return 0;
}
