#include <stdio.h>

int main() {

    int n;
    printf("Enter the number >10: ");
    scanf("%d", &n);

    while(n>10) {
        printf("%d\n", n);
        n = n - n/10;
    }

    return 0;
}
