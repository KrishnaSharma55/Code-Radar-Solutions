#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,m=0;
    scanf("%d",&n);
    for(int i=0; i<n+2; i=i+2){
        m=m+1;
        for(int j=m; j<n; j++){
            printf("a");
        }
        for(int j=n-i; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}