#include <stdio.h>

int main() {
    int a=3;
    float f=5;
    printf("%d\n",a/2);
    printf("%g\n",a/2.0);
    printf("%g\n",a/f);
    printf("%d",a/(int)f);
    return 0;
}