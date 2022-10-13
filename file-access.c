/***
 * FILE fopen(const char *restric filename, const char *restrict mode);
 * 
 * mode: {r, w, a, r+, w+, a+}
 * r: read
 * w: write
 * a: append
 * +: extended version of those modes
 * 
 * Returns a FILE handle on succcess, or NULL on failur
 * 
 * 
 * int fclose(FILE *stream)
 * - Closes a file previously open by fopen()
 * - Retunrs 0 on success or EOF on failure
 * 
 * 
 * FILE access functions
 * getc(), putc()
 * fget(), fputs()
 * fprintf(), fscanf()
 * 
 * 
 ***/

#include <stdio.h>

int main() 
{
    int counter=0;
    FILE *f=fopen("names.txt", "r+"); // read + editing accesss
    char c=getc(f); // get a single character
    while(c!=EOF)
    {
        putchar(c);
        c=getc(f);
        counter++;
    }
    fprintf(f, "\nI counted %d characters.\n", counter); // write into a file

    return 0;
}