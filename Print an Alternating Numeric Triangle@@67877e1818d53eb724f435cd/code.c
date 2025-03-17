#include <stdio.h>
int main(){
    int n, m = 1;  // Initialize m to 1 for correct pattern
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j <= n; j++) {
            #include <stdio.h>
int main() {
    int n, m = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j <= n; j++) {
            m = (j == n - i || j == n) ? 1 : 0;  // Modified condition to match the pattern
            printf("%d ", m);
        }
        printf("\n");
    }
    
    return 0;
}

            printf("%d", m);
        }
        printf("\n");
    }
    
    return 0;
}
