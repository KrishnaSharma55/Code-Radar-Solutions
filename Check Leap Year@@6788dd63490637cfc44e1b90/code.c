#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a%4==0){
        printf("Leap year");
    }
    if (a%400==0){
        printf("Not a leap year");
    }
    if(a%100==0){
        printf("Not a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}