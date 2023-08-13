#include <stdio.h>

/**
 * Question: What is the output of the following
 */

int main(void)
{
	char *p = "SAN";

	*p = 'A';
	printf("p = %c\n", *p);
	return (0);
}
