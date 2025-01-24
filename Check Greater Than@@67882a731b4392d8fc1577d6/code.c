#include <stdio.h>

int main() {
    bool a=false;
    int b,c;
    scanf("%d %d",&b,&c);
    if(b>c){
        a=true;
    }
    printf("%b",a);
    return 0;
}