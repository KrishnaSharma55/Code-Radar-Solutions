#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f", &a);
    float b= 3.14*a*a;
    printf("Area: %.2f",&b);
    return 0;
}