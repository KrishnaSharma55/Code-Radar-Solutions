#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    if (a>=18){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}