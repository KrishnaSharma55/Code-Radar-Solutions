#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    if(n>='A' && n<='Z'){
        printf("Uppercase");
    }
    else if(n>='a' && n<="z"){
        printf("Lowercase");
    }
    return 0;
}