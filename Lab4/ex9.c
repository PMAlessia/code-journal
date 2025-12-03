#include <stdio.h>

int main() {

    int a;
    int count = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d", &a);

    for (int i = 0; i < 3; i++) {
        if ((a % 10) % 2 == 1) {
            count++;
        }
        a /= 10;
    }

    printf("They are %d odd digits", count);

    return 0;
}