#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
 * Description - This program generates a random number at every run
 * Return: 0 (Success)
 */

int main(void)
{
	srand(time(0));

	int random_number = rand(); /* This will generate a random number between 0 - 32767 */

	printf("The random number generated is: %d\n", random_number);
	printf("The random number generated is: %d\n", random_number % 6); /*To generate a random number between 0 and 6. Used on a six sided die*/
	return (0);
}
