#include <stdio.h>

int main() {

    char a = 'A';
    int b = 2;
    float c = 0.25;
    double d = 2500000.0;

    // %d = Integer, decimal output
    // %c = Charcter
    // %s = String
    // %f = Floating point
    // %.2f
    // %% = Single percent sign

    printf("a is %c\n", a); // %c is a placeholder
    printf("b is %d\n", b);
    printf("c is %f\n", c);
    printf("d is %f\n", d);

    printf("char is %c, int is %d\n", a, b);


    return 0;
}