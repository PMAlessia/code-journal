#include <stdio.h>

int main() {

    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    // if (a >= 0 && b >= 0) {
    //     printf("They have the same sign!");
    // }else if (a < 0 && b < 0) {
    //     printf("They have the same sign!");
    // }else {
    //     printf("They don't have the same sign!");
    // }

    // printf((a >= 0) == (b >= 0) ? "They have the same sign!" : "They don't have the same sign!");

    printf((a ^ b) >= 0 ? "They have the same sign!" : "They don't have the same sign!");


    return 0;
}