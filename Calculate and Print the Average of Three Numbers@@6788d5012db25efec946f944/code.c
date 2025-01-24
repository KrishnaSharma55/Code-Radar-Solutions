#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a,b,c,d;
   scanf("%d %d %d",&a,&b,&c);
   d=(a+b+c)/3;
   printf("Average: %d",d);
    return 0;
}