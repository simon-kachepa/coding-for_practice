#include <stdio.h>

/**
 * main - Entry point
 * Description - Simple intro to strings in C
 * String - is a sequence of characters.
 * String is an array of characters
 * Return: 0 (Success)
*/

int main(void)
{
    /**
     * Declaring string in C
     * Data_type stringName[size];
    */
   char name[100];

   printf("Enter your name: ");
   scanf("%s", name);

   printf("%.5s\n", name);
   printf("%10.5s\n", name);
   puts(name); /*puts automatically adds a new line*/
    return (0);
}
