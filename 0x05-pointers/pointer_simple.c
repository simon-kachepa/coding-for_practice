#include <stdio.h>
/**
* main - Entry point
* Description:Program that assigns a value to a dereferrencer and assigns a value to it
* Return: 0 (Success)
*/

int main(void)
{
    int *ptr;

    *ptr = 98;
    printf("%d\n", *ptr);
    return (0);
}
