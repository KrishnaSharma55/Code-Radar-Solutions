#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf(a);
    }
    else(a<b){
        printf(b);
    }
    return 0;
}