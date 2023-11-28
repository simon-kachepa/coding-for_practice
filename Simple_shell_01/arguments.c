#include "main.h"

int main(int argc, char **argv)
{
	int i;

	printf("Number of arguments passed = %d\n", argc);
	printf("The arguments passed are:\n");
	for (i = 0; i < argc; i++)
	{
		printf("Argument %d = %s\n", i, argv[i]);
	}
	return (0);
}
