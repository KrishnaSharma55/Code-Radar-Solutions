#include <stdio.h>
int main(){
    int n, m = 1;  // Initialize m to 1 for correct pattern
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j <= n; j++) {
            if (j == n - i || j == n) {  // First and last column of the row should be 1
                m = 1;
            } else {
                m = 0;  // Middle values should be 0
            }
            printf("%d", m);
        }
        printf("\n");
    }
    
    return 0;
}
