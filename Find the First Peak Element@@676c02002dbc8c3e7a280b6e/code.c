#include<stdio.h>
int fpeak(int arr[],int n){
    int m;
    if(arr[0]>arr[1]){
        return arr[0];
    }
    
    for(int i=1; i<n; i++){
        if(arr[i-1]<arr[i]&& arr[i]>arr[i+1]){
            return arr[i];
        }
        else{
            m= -1;
        }
    }
    if(m==-1){
      if(arr[n-1]>arr[n-2]){
        return arr[n-1];
       }
       else{
        return -1;
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
    printf("%d",fpeak(arr,n));
    

    return 0;
}