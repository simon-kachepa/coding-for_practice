#include <stdio.h>

/**
*Program that prints command line arguements
*/

int main(int argc, char *argv[])
{
    int index;

    for(index = 0; index < argc; index++)
    {
        printf("%s\n", argv[index]);
    }
    return (0);
}
