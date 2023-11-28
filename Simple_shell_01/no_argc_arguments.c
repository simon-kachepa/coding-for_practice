#include "main.h"

int main(int argc, char **argv)
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("Argument %d = %s\n", i, argv[i]);
	}
	return (0);
}
