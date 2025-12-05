#include <stdio.h>

void display(unsigned n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            printf("1");
        }else {
            printf("0");
        }
    }
    printf("\n");
}

int noOfOneBits(unsigned n) {
    int count = 0;
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            count++;
        }
    }
    return count;
}

int noOfPairs(unsigned n) {
    int count = 0;
    for (int i = sizeof(n) * 8 - 1; i > 0; i--) {
        if (((n >> i) & 1) != ((n >> (i - 1)) & 1)) {
            count++;
        }
    }
    return count;
}


int main() {

    unsigned n;
    printf("Enter a number: ");
    scanf("%d", &n);

    display(n);
    printf("Number of bits of 1 is %d\n", noOfOneBits(n));
    printf("Number of pairs (10 or 01) is %d\n", noOfPairs(n));

    return 0;
}