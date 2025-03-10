#include<stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=n-i; j<n; j++){
        if((i%2!=0) || (j%2!=0)){
            m=1;
        }
        else{
            m=0;
        }
            printf("%d ",m);
        }
        printf("\n");
    }
}