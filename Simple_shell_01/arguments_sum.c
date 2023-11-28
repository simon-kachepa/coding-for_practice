#include "main.h"

int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("The sum of the arguments = %d\n", sum);
	return (0);
}
