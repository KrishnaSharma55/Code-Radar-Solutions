#include <stdio.h>

int main() {
    bool a=false;
    int b,c;
    scanf("%d %d",&b,&c);
    if(b>c){
        a=true;
    }
    printf("%d",a);
    return 0;
}