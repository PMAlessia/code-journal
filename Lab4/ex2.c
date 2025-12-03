#include <stdio.h>

int main() {

    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x <= z && z < y) {
        printf("%d is inside the interval [%d,%d)", z, x, y);
    }else {
        printf("%d is not inside the interval [%d,%d)", z, x, y);
    }

    return 0;
}