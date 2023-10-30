#include <stdio.h>

/**
* main - Entry Point
* Description:
* Return: 0 (Success)
*/

int main(void)
{
    int arr[5] = {4, 5, 6, 7, 8};
    int *ptr;
    ptr = arr;

    printf("%d\n", ptr[4]);

    *ptr = 9;
    printf("%d\n", *ptr);

    *(ptr+2) = 10;
    printf("%d\n", *(ptr + 2));

    ptr[4] = 11;
    printf("%d\n", *(ptr + 4));




    return (0);
}
