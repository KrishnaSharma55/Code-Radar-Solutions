#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j=i; j<=n; j++){
            m=m+1;
            printf("%d ",n+i-j);
        }
        printf("\n");
        m=0;
    }
}