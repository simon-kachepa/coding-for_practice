#include <stdio.h>

/**
* main - Entry point
* Description: Program that finds the length of a string
* Return: 0 (Success)
*/

int _strlen(char *str);
int main(void)
{
    printf("%d\n", _strlen("Hello World"));

    return (0);
}
int _strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
