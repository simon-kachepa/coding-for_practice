#include <stdio.h>

/**
* main - Entry point
* Desrciption: 
* Return: 0 (Success)
*/

int main(void)
{
    char *ptr = "Simon";
    printf("%c\n", *ptr);

    *ptr = "H"; /*This is not allowed*/
    printf("%c\n", *ptr); /*It will print error*/
    return (0);
}
