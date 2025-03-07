#include<stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        m=1;
        for(int j=n-i; j<=n; j++){
            ++m;
            printf("%d",m);
            --m;
        }
        m=0
        printf("\n");
    }
}