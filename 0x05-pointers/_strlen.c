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
/**
    *_strlen - Function that finds the length of a string
    * @str: String to be evaluated
    * Return: length of the string
*/
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
