#include <stdio.h>

int main(void)
{
    char name[] = "Simon";
    char cpy_name[] = "";
    int index;
    
    for(index = 0; name[index] != '\0'; index++)
    {
        cpy_name[index] = name[index];
    } 
    cpy_name[index] = '\0';

    printf("%s\n", cpy_name);
    return (0);
}
