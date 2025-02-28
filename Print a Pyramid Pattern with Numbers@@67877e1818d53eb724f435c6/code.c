#include<stdio.h>
int main (){
    int n,m=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int j=n-i; j<n; j++){

            printf("%d ",j);
        }
        printf("\n");
    }

}