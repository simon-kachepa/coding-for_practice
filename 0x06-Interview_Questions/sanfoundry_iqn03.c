#include <stdio.h>

/**
* main - Entry point
* Question: What is the output of the following
* Return: 0 (Success)
*/

int main(void)
{
	char *p = "SAN";

	*p = 'A';
	printf("p = %c\n", *p);
	return (0);
}
