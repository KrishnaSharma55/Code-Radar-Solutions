#include<stdio.h>
int main() {
    int n,m=0;
    char ch;
    scanf("%d",&n);
    for(int i =0; i<n; i++){
        for(int j =n-i; j<=n; j++){
            printf("%d",j);
            m=m+1;
        }
        printf("\n");
        
    }
}