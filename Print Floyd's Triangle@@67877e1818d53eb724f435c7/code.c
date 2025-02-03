#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a=0;
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%d",j);
            a++;
        }
        printf("\n");
    }

    return 0;
}