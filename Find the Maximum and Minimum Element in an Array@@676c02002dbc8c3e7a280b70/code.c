#include<stdio.h>
int min(int arr[],int n,int j){
    j=arr[0];
    for (int i = 0; i < n-1; i++) {
        if(arr[i]<arr[i-1]){
            j=arr[i];
        }
    }
    return j;
}
int max(int arr[],int n,int k){
    k=arr[0];
    for (int i = 0; i < n-1; i++) {
        if(arr[i]>arr[i-1]){
            k=arr[i];
        }
    }
    return k;
}
int main() {
    int n,j,k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("%d %d",min(arr,n,j),max(arr,n,k));
    return 0;
}
