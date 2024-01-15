#include "main.h"

int main(void)
{
	int sum, diff, quot, prod;

	sum = add(100, 10);
	diff = sub(100, 10);
	quot = div(100, 10);
	prod = mul(100, 10);

	printf("The sum is: %d", sum);
	printf("The difference is: %d", diff);
	printf("The quotient is: %d", quot);
	printf("The product is: %d", prod);

	return (0);
}
