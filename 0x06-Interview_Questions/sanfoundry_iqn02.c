#include <stdio.h>

/**
 * Question: What is the output of the following code
 */

int main(void)
{
	int a, b = 1, c = 1;
	
	a = sizeof(c = ++b + 1);
	printf("a = %d", a);
	printf("b = %d", b);
	printf("c = %d", c);
	return (0);
}
