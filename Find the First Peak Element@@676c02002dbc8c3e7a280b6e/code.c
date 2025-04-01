#include<stdio.h>
void fpeak(int arr[],int n,int m){
    for(int i =1;i<n-1; i++){
        if(arr[i-1]<arr[i]>arr[i+1]]){
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
    fpeak(arr,n,m);
    printf("%d",arr[m]);
    

    return 0;
}