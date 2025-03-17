#include <stdio.h>
int main(){
    int n, m = 1;  
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j <= n; j++) {
            if (j == n - i || j == n) {  
                m = 1;
            } else {
                m=0;
            }
            printf("%d", m);
        }
        printf("\n");
    }
    
    return 0;
}
