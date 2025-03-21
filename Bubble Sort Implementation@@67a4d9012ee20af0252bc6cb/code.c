#include<stdio.h>
void bubbleSort(arr , n){
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void printArray(arr , n){
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr ,n);
    printArray(arr ,n);
}
