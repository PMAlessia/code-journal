#include <stdio.h>

int main() {

    double x, y;
    int a;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("1. Max between x and y\n");
    printf("2. Min between x and y\n");
    printf("3. x\n");
    printf("4. y\n");

    printf("Enter choice: ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("Max = %.2f", x > y ? x : y);
            break;
        case 2:
            printf("Min = %.2f", x < y ? x : y);
            break;
        case 3:
            printf("x = %.2f", x);
            break;
        case 4:
            printf("y = %.2f", y);
            break;
        default:
            printf("Not an option!");
    }
    return 0;
}