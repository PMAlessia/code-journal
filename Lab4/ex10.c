#include <stdio.h>

int main() {

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        a = a + 1;
    }

    printf("The highest 2 odd numbers, smaller than the input are: %d and %d", a-2, a-4);

    return 0;
}