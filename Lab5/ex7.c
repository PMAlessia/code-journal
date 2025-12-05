#include <stdio.h>

int main() {

    int n, m;
    printf("Enter two numbers (m>0 and n>m): ");
    scanf("%d%d", &n, &m);

    int start = 0;

    for (int i = 1; i <= n; i++) {

        if (start < m) {
            printf("%d ", start);
            start++;
        }else {
            printf("%d ", start);
            start = 0;
        }
    }

    return 0;
}