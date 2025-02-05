#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    char b=0;
    scanf("%d",&a);
    if(a==1){
        b=0;
    }
    if(a==2){
        b=1;
    }
    for(int i=2; i<a/2; i++){
        if(a%i==0){
            b=0;
        }
        else{
            b=1;
        }
    }
    if(b==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}