#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description - This program generates a random number at every run
 */

int main(void)
{
	srand(time(0));

	int random_number = rand(); /* This will generate a random number between 0 - 32767 */

	printf("The random number generated is: %d\n", random_number);
	return (0);
}
