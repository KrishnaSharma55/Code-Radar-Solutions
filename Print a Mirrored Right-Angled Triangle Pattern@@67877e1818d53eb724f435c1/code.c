#include<stdio.h>
int main{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=n-i; k<n; k++){
            printf("*");
        }
    }
    return 0;
}