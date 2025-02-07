#include <stdio.h>

int main() {
    int a, b;
    char c;
    printf("");
    scanf("%d %d %*c%c", &a,&b,&c);
    switch(c){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        default:
            printf("error");
    }
}