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
    printf("Enter a number:");
    scanf("%d",&a);

    int i = sizeof(a) * 8 - 1;
    int result = 1 & (a >> i);

    printf("Result = %d\n", result);
    display(a);

    return 0;
}