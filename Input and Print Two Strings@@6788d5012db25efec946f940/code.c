#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char[100] a,b;
    scanf("%s %s",&a,&b);
    printf("you entered: %s and %s", a,b);
    return 0;
}