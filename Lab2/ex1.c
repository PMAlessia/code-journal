#include <stdio.h>

int main() {

    int decimal_num = 91;
    int binary_num = 0b1011011;
    int octal_num = 0133;
    int hexadecimal_num = 0x5B;

    printf("%d %d %d %d\n", decimal_num, binary_num, octal_num, hexadecimal_num);
    printf("%o %o %o %o\n", decimal_num, binary_num, octal_num, hexadecimal_num);
    printf("%x %x %x %x\n", decimal_num, binary_num, octal_num, hexadecimal_num);

    return 0;
}