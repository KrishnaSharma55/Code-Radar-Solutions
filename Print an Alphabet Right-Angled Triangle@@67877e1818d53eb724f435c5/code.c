#include<stdio.h>
int main() {
    int n;
    char ch;
    scanf("%d",&n);
    for(int i =0; i<n; i++){
        for(int j =n-i; j<=n; j++){
            printf("%d",i+1);
        }
        printf("\n");
    }
}