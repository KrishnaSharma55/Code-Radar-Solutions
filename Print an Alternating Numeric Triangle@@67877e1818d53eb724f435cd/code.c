#include<stdio.h>
int main(){
    int n,m=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            printf("%d ",m);
            if(n%2==0){
                m=0;
            }
            else if(m==1){
                m=0;
            }
        }
        printf("\n");
    }
}