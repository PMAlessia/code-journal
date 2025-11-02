#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter a decimal number: ");
    scanf("%d", &a);
    printf("Enter a octal number: ");
    scanf("%o", &b);
    printf("Enter a hexadecimal number: ");
    scanf("%x", &c);

    printf("%d %d %d\n", a, b, c);
    printf("%o %o %o\n", a, b, c);
    printf("%x %x %x\n", a, b, c);

    return 0;
}