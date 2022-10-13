#include <stdio.h>
#include <time.h>

int main() 
{
    time_t now;

    time(&now);
    printf("%s", ctime(&now));

    /**
    Special data types may differ from system to system
    The typedef keeps the data type consistent to
    maintain compatibility.
    */

   typedef float radius;
   radius a;
   a = 27.5;

   printf("A circle with radius %.2f has an area of  %.2f\n", a, a*a*3.1415926);



    return(0);
}