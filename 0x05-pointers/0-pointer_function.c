#include <stdio.h>

/**
* addNumbers - A simple function that adds two numbers
* @ptrx: pointer variable to first interger
* @ptry: Pointer variable to second integer
* main - Entry point
* Return: 0
*/

int addNumbers(int *ptrx, int *ptry);

int main(void)
{
	int x = 10, y = 20, result;

	printf("a: %d Address: %p\n", x, &x);
	printf("a: %d Address: %p\n", y, &y);

	printf("****************************************\n");

	result = addNumbers(&x, &y);
	printf("Sum: %d\n", result);

	return (0);
}

int addNumbers(int *ptrx, int *ptry)
{
	*ptrx = 50;
	*ptry = 100;
	return (*ptrx + *ptry);
}
