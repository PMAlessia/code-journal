#include <stdio.h>
#include <math.h>

int main() {

    printf("%g %g\n", 0.0/1, 0.0/-1);
    printf("%d\n", 0.0/1==0.0/-1);

    printf("%g %g\n", 1/0.0, -1/0.0);

    printf("%g\n", 0/0.0);
    printf("%d\n", NAN==NAN);

    return 0;
}