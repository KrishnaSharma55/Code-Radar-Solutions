#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   float a,b,c;
   scanf("%f %f",&a, &b);
   c=a*b;
   printf("product: %2.f",c);
    return 0;
}