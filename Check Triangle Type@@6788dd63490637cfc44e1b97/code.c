#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equalateral");
    }else if((a==b && b!=c) || (b==c && b!=a)){
        printf("Isoceles");
}
    return 0;
}