#include <stdio.h>

int main() {

    int a, b;
    double price;
    printf("Enter the no. of km within the city and the no. of km outside: ");
    scanf("%d %d", &a, &b);

    price = ((6.5 * a + 5 * b) / 100) * 6.2;

    printf("The total price is %.2f\n", price);

    return 0;
}