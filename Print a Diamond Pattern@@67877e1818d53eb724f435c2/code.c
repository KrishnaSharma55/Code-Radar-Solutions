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
        for(int m=n-i; m<=n; m++){
            printf(" ");
        }
        for(int l=i; l<=(n-i)-1; l=l+1){
            printf("*");
        }
        printf("\n");
    }
}