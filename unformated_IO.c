#include <stdio.h>

int main() {
    char c;
    char str[20];
    c = getchar(); // read one character each from stdin
    putchar(c);

    getchar(); // delete newline character whn you hit the enter
    putchar('\n');
    
    fgets(str, 20, stdin);
    puts(str);

    return 0;
}