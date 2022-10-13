#include <stdio.h>

/**
 * The sizeof Unary operator
 * Used on variables, arrays, allocated memory
 * Returns a size_t value (positive integer)
 * Used when allocating memory or dealing with pointers
 * Show how many bytes each item occupies
 */

int main()
{
    double d;
    printf("double variable 'd' uses %lu bytes\n", sizeof(d));
    return(0);
}