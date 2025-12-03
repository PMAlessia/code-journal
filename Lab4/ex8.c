#include <stdio.h>

int main() {

    double a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("%.2f", a > b ? (a > c ? a : c) : (b > c ? b : c));

    return 0;
}