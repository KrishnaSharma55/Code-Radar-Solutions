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
        for(int k= n-2-i; k<=n; k++){
            printf(" ");
        }
        for(int l=i; l<=n-i; l++){
            printf("*");
        }
        printf("\n");
    }
}