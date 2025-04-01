#include<stdio.h>
void min(int arr[],int n,int j){
    j=arr[0];
    for (int i = 0; i < n-1; i++) {
        if(arr[i]<arr[i-1]){
            int j=arr[i];
        }
    }
}
void max(int arr[],int n,int k){
    k=arr[0];
    for (int i = 0; i < n-1; i++) {
        if(arr[i]>arr[i-1]){
            int k=arr[i];
        }
    }
}
int main() {
    int n,j,k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    min(arr,n,j);
    max(arr,n,k);
    printf("%d %d",j,k);
    return 0;
}
