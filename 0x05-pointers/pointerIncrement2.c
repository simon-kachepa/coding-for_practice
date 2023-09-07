#include <stdio.h>

/**
* main - Entry point
* Description - Program that increment a negative number and change its sign up to 0 using pointer array
* Return: 0
*/

int main(void)
{
    int arr[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = arr; 

    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++, *p++, *++p);
    
    return (0);
}
