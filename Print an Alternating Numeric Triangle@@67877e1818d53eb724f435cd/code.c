#include<stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        if(i==1){
            m=0
        }
        else{
            m=1
        }
        for(int j=n-i; j<=n; j++){
            printf("%d",m);
        }

        printf("\n");
    }
}