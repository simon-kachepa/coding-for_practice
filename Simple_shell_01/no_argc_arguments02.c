#include "main.h"

int main(int argc, char **argv)
{
	int i = 0;

	while (*argv != NULL)
	{
		printf("Argument %d = %s\n", i, *argv);
		argv++;
		i++;
	}
	return (0);
}
