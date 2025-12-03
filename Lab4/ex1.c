#include <stdio.h>

int main() {

    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if ((5 * a + 7 * b) <= 20) {
        printf("Enough money!");
    }else {
        printf("Not enough money!");
    }

    return 0;
}