#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num;

    num = malloc(sizeof(int));

    printf("%d\n", *num);
    return (0);
}
