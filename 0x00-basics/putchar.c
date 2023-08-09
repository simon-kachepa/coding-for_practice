#include <stdio.h>

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
