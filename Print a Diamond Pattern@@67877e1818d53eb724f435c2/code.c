#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=n-i; k<=n+i; k++){
            printf("*");
        }
       printf("\n");
    }
    for(int i=0; i<n; i++) {
        for(int k= n-i; k<=n; k++){
            printf(" ");
        }
        for(int l=i; l<=n+i; l=l+2){
            printf("*");
        }
        printf("\n");
    }
}