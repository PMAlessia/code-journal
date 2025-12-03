/* #include <stdio.h>

int main() {
    double a,b,c;

    // for a = 1, b = 2 correct
    // for a = 1, b = 49 incorrect

    scanf("%lg",&a);
    scanf("%lg",&b);

    c=a/b;

    if(c*b==a)
        printf("egal");
    else
        printf("inegal");

    return 0;
}
*/

#include <stdio.h>
#include <math.h>

double eps=1e-6;

int main(){
    double a,b,c;

    scanf("%lg",&a);
    scanf("%lg",&b);

    c=a/b;

    if(fabs(c*b - a)<eps)
        printf("egal");
    else
        printf("inegal");

    return 0;
}