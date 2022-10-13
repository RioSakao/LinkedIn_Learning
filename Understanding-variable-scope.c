#include <stdio.h>

    /*
    auto
        auto variables are private, local to the function.
        Their value are released after the function quits.

    static
        static variables are local to a specific function but retain(continues to have) 
        their values after function quits.

    extern(global)
        extern variables exsist outside of any function. Their values are retained 
        and available to all functions.
    */

void sum(void) 
{
    auto int a,b; // auto is not necessary

    a = 91; b = 7;
    printf("%d + %d = %d\n",a,b,a+b);
}

char *myname(void)
{
    static char me[] = "Rio Sakao";
    return(me);
}

int main()
{
    puts("Calling the sum() function:"); // only outputs strings
    sum();

    printf("I am %s\n", myname() );

    return(0);

}