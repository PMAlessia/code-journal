#include<stdio.h>

int main() {

    double a, b, c;
    printf("Enter 3 numbers:");
    scanf("%lg %lf %le", &a, &b, &c);
    printf("%g %f %e", a, b, c);

    return 0;
}