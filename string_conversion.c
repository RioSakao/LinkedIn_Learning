/**
 * @file string_conversion.c
 * <stdlib>
 * int atoi(const char *str)
 * double atof(const char *str)
 * long strtol(const char *restrict str, 
 *             char **restrict str_end, int base);
 * int sscanf(const char *restrict buffer, 
 *            const char *restrict format, ...)
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    //Part1: atoi
    char str1[10]="572";
    int x = atoi(str1);
    printf("x=%d\n", x);

    //Part2: strtol
    char str2[10] = " 123 3A ";
    char *end=str2; // pointer to a pointer
    long num;
    num = strtol(str2, &end, 10);//decimal
    printf("The first number id %li\n", num);
    num = strtol(end, &end,16); //heaxa-decimal
    printf("The second number is %li in decimal, and %lX is hexadecimal\n", num, num);

    //Part 3 sscanf
    int a, b;
    sscanf(str2, "%i %x ", &a, &b);
    printf("The first number id %li\n", a);
    printf("The second number is %li in decimal, and %lX is hexadecimal\n", b, b);

    return 0;
}