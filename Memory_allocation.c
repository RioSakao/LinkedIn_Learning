/**
 * @file Memory_allocation.c
 * <stdlib.c>
 * void *malloc(size_t size)
 * void *realloc(void *ptr, size_t new_size)
 * void free(void *ptr)
 * 
 */

#include <stdio.h>
#include <stdlib.h>

char *str;

int main() {
    str=malloc(100);
    scanf("%[^\n]s", str);
    printf("\n%s\n", str);
    free(str);

    return 0;
}