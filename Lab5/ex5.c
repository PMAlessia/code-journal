#include <stdio.h>

int main() {

    int n;

    for (;;) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n < 0) {
            printf("Invalid input\n");
            continue;
        }

        if (n % 2 == 0) {
            printf("The number is even!\n");
        }else {
            printf("The number is odd!\n");
        }

    }

    return 0;
}