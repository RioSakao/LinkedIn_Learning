#include <stdio.h>

int main() 
{
    int a, b;

    a = 100;
    b = 7;

    printf("%d / %d = %d\n", a,b,a/b);
    printf("%d / %d = %f\n", a,b,(float)a/b);

    return(0);
}