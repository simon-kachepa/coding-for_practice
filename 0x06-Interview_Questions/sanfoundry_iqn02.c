#include <stdio.h>

/**
 * Question: What is the output of the following code
 */

int main(void)
{
	int a, b = 1, c = 1;
	
	a = sizeof(c = ++b + 1);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	return (0);
}
