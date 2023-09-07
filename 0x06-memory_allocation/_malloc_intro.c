#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num;

    num = malloc(sizeof(int));

    printf("%d\n", *num);
    free(num);
    return (0);
}
