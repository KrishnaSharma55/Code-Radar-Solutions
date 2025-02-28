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
    for(int i=0; i<n; i++) {
        for(int j=n-i; j<=n-1; j++){
            printf(" ");
        }
        for(int k=i; k<=n-i; k++){
            printf("*");
        }
       printf("\n");
    }
}