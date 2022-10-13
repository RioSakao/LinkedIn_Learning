/***
 * int scanf(const char *restrict formate, ...) 
 * read a string from stdin
 * 
 * int printf(const char *restrict format, ...)
 * print a string to stdout
 * 
 * int sprintf(char *restrict buffer, const char *restrict formate, ...)
 * save string to a buffer
 * 
 ***/

#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    double d;
    char str[30];

    scanf("%i %c %f %lf %[^\n]s", &i,&c,&f,&d, str); // &: sending an address
    // until you hit the newline, string ends with null  terminator
    printf("Integer: %i\nCharacter: %c\nFloat: %f\nDouble: %lf\nString: %s", i,c,f,d,str);




    return 0;
}