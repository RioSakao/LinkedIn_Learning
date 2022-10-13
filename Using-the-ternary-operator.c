#include <stdio.h>

int main() 
{
    int a, b, c;

    a = 10;
    b = 14;
    // if ( a > b) is true... c = a
    // if not true... c = b
    c = ( a > b ) ? a : b;
    // 1 represents true in C language
    // 0 represemts false in C
    printf("%d is the greater of %d and %d\n", c, a, b);

    return(0);
}