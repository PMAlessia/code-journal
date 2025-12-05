#include <stdio.h>

int main() {

    int choice;
    double a, b;

    printf("1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n5-Exit\n");


    for (;;) {

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        if (choice > 5 || choice < 1) {
            printf("Not an option!\n");
            continue;
        }

        printf("Please enter 2 numbers: ");
        scanf("%lf %lf",&a, &b);

        switch (choice) {
            case 1:
                printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
                break;
            case 2:
                printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
                break;
            case 3:
                printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
                break;
            case 4:
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
                break;
        }
    }


    return 0;
}