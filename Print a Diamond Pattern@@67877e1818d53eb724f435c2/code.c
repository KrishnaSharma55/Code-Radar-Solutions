#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        for(int j=i; j<n-1; j++){
            printf(" ");
        }
        for(int k=n-i; k<=n+i; k++){
            printf("*");
        }
       printf("\n");
    }
    for(int i=0; i<n-1; i++) {
        for(int j=n-i; j<=n-1; j++){
            printf(" ");
        }
        for(int k=i; k<n-1; k=k+2){
            printf("*");
        }
       printf("\n");
    }
}