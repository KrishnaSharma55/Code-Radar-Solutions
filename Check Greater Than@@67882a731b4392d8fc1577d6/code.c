#include <stdio.h>

int main() {
    int b,c;
    scanf("%d %d",&b,&c);
    if(b>c){
        printf("True");
    }else if(b<c){
        printf("False");
    }
    return 0;
}