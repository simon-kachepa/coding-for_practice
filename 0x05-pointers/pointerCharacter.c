#include <stdio.h>

/**
* main - Entry point
* Description - Program that increment a negative number and change its sign up to 0
* Return: 0
*/

int main(void)
{
   char str[] = "welcome to jenny's lectures";
   char *ptr = str;

   printf("%c\n", *ptr);
   printf("%c\n", *(ptr++ +1));
   printf("%c\n", *(( ptr-- +5)-1)+3);
   printf("%c\n", *( ++ptr+10)-32);
   printf("%c %c %c\n", *ptr, *++ptr, *--ptr);
    
    return (0);
}
