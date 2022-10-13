#include <stdio.h>

int main()
{
    /**
    int a;

    printf("Select item 1, 2, or 3: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            puts("This is the first item\n\n");
            break;
        case 2:
            puts("This is the second item\n\n");
            break;
        case 3:
            puts("This is the third item\n\n");
            break;
        default:
            puts("Invalid choice\n\n");
    }
*/
    char b;

    puts("Menu");
    puts("A - Bugs");
    puts("B - Snake Surprise");
    puts("C - Eyeball Soup");
    printf("Your choice: ");
    scanf("%c", &b);

    switch(b)
    {
        case 'A':
        case 'a':
            puts("Delicious! A hearty snack!");
            break;

        case 'B':
        case 'b':
            puts("A family favorite!");
            break;

        case 'C':
        case 'c':
            puts("From a secret receipe.");
            break;
        
        default:
            puts("Invalud choice");
    
    }

    return(0);
}