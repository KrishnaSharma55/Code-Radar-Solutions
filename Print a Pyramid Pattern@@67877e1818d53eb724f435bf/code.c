#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i=i+2){
        for(int j=0; j<n; j++){

        }
        for(int j=n-i; j<=n; j=j+2){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}