#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("Not Prime");
    }
    if(a==2){
        printf("Prime");
    }
    for(int i=2; i<a/2; i++){
        if(a%i==0){
            printf("Prime")
        }
    }
    
    return 0;
}