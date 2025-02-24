#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        for(int j=i; j<n-1; j++){
            printf(" ");
        }
        for(int k=n-i; k<=n+i; k=k+2){
            printf("* ");
        }
        printf("\n");
    }
}