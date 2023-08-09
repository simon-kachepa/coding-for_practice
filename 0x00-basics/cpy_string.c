#include <stdio.h>

int main(void)
{
    char name[] = "Simon";
    char cpy_name[] = "";

    int i;
    for(i = 0; name[i] != '\0'; i++)
    {
        cpy_name[i] = name[i];
    } 
    cpy_name[i] = '\0';

    printf("%s\n", cpy_name);
    return (0);
}
