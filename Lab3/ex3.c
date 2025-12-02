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

unsigned modifyBits(unsigned a) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        if (i == 0 || i == 2 || i == 3) {  //set to 1
            a = a | (1 << i);
        }else if (i == 1 || i == 5 || i == 6) {  //reset to 0
            a = a & ~(1 << i);
        }else if (i == 4 || i == 7) {  //complement
            a = a ^ (1 << i);
        }
    }
    return a;
}

int main() {

    unsigned a;
    printf("Enter a number: ");
    scanf("%u", &a);

    display(a);
    display(modifyBits(a));

    // display(~1);

    unsigned b;
    printf("Enter a number: ");
    scanf("%u", &b);

    display(b);
    display(modifyBits(b));

    return 0;
}