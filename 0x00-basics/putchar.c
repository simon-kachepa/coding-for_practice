#include <stdio.h>
/**
* Program that prints alphabet characters from A to Z
*/

int main(void)
{
    int character;

    for(character = 'A'; character <= 'Z'; character++)
    {
        putchar(character);
    }
    putchar('\n');
    return (0);
}
