#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a=1;
    scanf("%d",&n);
    for(int i=0; i<=n+1; i++){
        for(int j=n-i; j<=n+1; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}