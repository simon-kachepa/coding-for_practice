#include <stdio.h>

int main(void)
{
    char name[] = "Simon";

    printf("%s\n", name);

    name[5] = 'K';
    printf("%s\n", name);
 
    return (0);
}
