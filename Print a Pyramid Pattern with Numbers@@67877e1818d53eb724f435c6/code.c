#include<stdio.h>
int main (){
    int n,m=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            printf(" ");
        }
        for(int j=n-i; j<=n; j++){
            printf("%d ",m+1);
            m=m+1;
        }
        printf("\n");
        m=0;
    }

}