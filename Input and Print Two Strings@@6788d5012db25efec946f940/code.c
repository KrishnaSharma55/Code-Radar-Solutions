#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    char a,b[100];
    scanf("%s %s",&a,&b);
    printf("you entered: %s and %s", a,b);
    return 0;
}