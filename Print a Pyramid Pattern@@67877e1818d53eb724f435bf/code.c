#include <stdio.h>



int main() {
    int n,m=0;
    scanf("%d",&n);
    for(int i=0; i<n+2; i++){
        // for(int j=m; j<n-1; j++){
        //     printf();
        // }
        for(int j=n-i; j<=n+i; j=j+2){
            printf("*");
        }
        printf("\n");
        m=+1;
    }
    return 0;
}