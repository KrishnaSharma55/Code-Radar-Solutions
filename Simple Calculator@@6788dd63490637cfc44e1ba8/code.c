#include <stdio.h>

int main() {
    int a, b;
    char c;
    printf("");
    scanf("%d %d *c%c", &a,&b,&c);
    switch(c){
        case '+':
            printf("%d",a+b);
        break;
        case '-':
            printf("%d",a-b);
        break;
        case '*':
            printf("%d",a*b);
        break;
        case '/':
            printf("%d",a/b);
        break;
        default:
            printf("Error");
    }
}