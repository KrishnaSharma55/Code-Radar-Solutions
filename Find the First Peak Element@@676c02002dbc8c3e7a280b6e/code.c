#include<stdio.h>
void fpeak(int arr[],int n){
    for(int i=1; i<n; i++){
        if(arr[i-1]<arr[i]&& arr[i]>arr[i+1]){
            m=i;
        }
        else{
            m=-1;
        }
    }
}

int main() {
    int n,m;
    
    // Input number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d",fpeak(arr,n););
    

    return 0;
}