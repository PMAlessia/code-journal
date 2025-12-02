#include <stdio.h>

void display(unsigned a) {
    for (int i = sizeof(a) * 8 - 1; i >= 0; i--) {
        if ((a >> i) & 1) {
            printf("1");
        }else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {

    unsigned char x;
    int a, b;
    printf("Enter two numbers between 0 and 15: ");
    scanf("%d %d", &a, &b);

    printf("Binary display of the entered numbers:\n");
    display(a);
    display(b);

    x = a << 4;
    x = x | b;

    printf("Binary display of the obtained number:\n");
    display(x);
    printf("Decimal display of the obtained number: %d\n", x);

    b = x & 0b1111;
    a = x >> 4;

    printf("Binary display of the entered numbers (after decomposition): \n");
    display(a);
    display(b);

    return 0;
}