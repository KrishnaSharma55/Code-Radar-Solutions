#include<stdio.h>
int bubbleSort(int arr[],int n,int m)
{
    for(int j=0; j<n-1; j++){
        if(arr[j]<=arr[j+1]){
            m= 0;
        }
        else{
            m=1;
        }
        }
    
}

void main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr ,n,m);
   if(m==0){
    printf("Sorted");
   }
   else{
    printf("Not Sorted");
   }

}
