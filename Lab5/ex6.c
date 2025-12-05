#include <stdio.h>

int main() {

    int n;
    printf("Enter a number >2: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || j == n || j == i) {
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}