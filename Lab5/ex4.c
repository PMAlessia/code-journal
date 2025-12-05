#include <stdio.h>

int main() {

    float x, y;

    for (;;) {
        printf("x: ");
        scanf("%g", &x);

        if (x == 0) break; // conditie de terminare

        printf("y: ");
        scanf("%g", &y);

        if (y == 0) continue; // evita impartirea la zero

        printf("%g/%g=%g\n", x, y, x/y);
    }

    return 0;
}