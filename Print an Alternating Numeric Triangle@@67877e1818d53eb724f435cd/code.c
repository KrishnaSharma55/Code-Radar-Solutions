#include<stdio.h>
int main(){
    int n,m=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            if(n%2==0){
                m=0;
            }
            else if(n%2!=0){
                m=1;
            }
            printf("%d ",m);
            if(m==0){
                m++;
            }
        }
        printf("\n");
    }
}