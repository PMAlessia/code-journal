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

    int a;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 3; i >= 0; i--) {
        if ((1 << i) & a) {
            sum++;
        }
    }

    printf("The sum of the last 4 bits is %d\n", sum);
    display(a);

    return 0;
}