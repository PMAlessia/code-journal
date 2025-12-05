#include <stdio.h>

int main() {

    int n;
    int sum = 0;
    printf("Enter the number higher than 1: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {

        sum += i;

        if (i == n) {
            printf("%d = %d", i, sum);
        }else {
            printf("%d + ", i);
        }
    }

    return 0;
}