#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %s", &a,&b,&c);
    if (c == '+')
        printf("%d", a + b);
    else if (c == '-')
        printf("%d", a - b);
    else if (c == '*')
        printf("%d", a * b);
    else if (c == '/')
        printf("%f", a / b);
    else
        printf("Error");
}