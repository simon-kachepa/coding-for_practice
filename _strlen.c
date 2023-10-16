#include <stdio.h>

/**
 * Program that counts the number of characters in a string 
*/

int _strlen(char *str);
int main(void)
{
    printf("%d\n", _strlen("Hello World"));

    return (0);
}
int _strlen(char *str)
{
    int count;

    count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return (count);
}
