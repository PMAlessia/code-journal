#include <stdio.h>

int main() {

    int a=3,b=7,c;

    c=a++ + ++b;
    printf("%d %d %d\n",a,b,c); // 4 8 11

    c=--a + --b;
    printf("%d %d %d\n",a,b,c); // 3 7 10

    c=--a-b--;
    printf("%d %d %d\n",a,b,c); // 2 6 -5

    c=a-- - --b;
    printf("%d %d %d\n",a,b,c); // 1 5 -3

    return 0;
}