#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    if (a%400==0 && a%4==0){
        printf("Leap year");
    }
    if (a%100==0){
        printf("Not a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}