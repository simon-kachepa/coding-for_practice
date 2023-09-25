#include <stdio.h>
#include <stdlib.h>

/**
*Description- Program that prints memory address
*/

int main()
{
    int *num;

    num = malloc(sizeof(int));

    printf("%d\n", *num);
    free(num);
    return (0);
}
