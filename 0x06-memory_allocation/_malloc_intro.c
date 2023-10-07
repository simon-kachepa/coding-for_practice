#include <stdio.h>
#include <stdlib.h>

/**
*Description- Program that prints memory address
*/

int main()
{
    int *number;

    number = malloc(sizeof(int));

    printf("%d\n", *number);
    free(num);
    return (0);
}
