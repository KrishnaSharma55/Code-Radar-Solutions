#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=n-i; j<=n; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}