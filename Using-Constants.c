#include <stdio.h>

int main() 
{
 
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar('\n');
  
   
    char greetings[] = "String literals";
    puts(greetings);


    const int count = 4; // must assign value immediatly
    printf("Please count to %d\n", count);
    printf("Do not count to %d\n", count+1);
    printf("Do not count to %d\n", count-1);

    return(0);
}