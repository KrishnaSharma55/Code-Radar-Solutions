#include<stdio.h>
int main() {
    int n,m=0;
    char ch;
    scanf("%d",&n);
    for(int i =0; i<n; i++){
        for(int j =n-i; j<=n; j++){
            printf("%C ",65+m);
            m=m+1;
        }
        printf("\n");
        m=0;
    }
}