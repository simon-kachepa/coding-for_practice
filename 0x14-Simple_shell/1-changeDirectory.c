#include "main.h"

int main(void)
{
	char *newDirectory = "Hardon/testDirectory";

	if (chdir(newDirectory) == 0)
	{
		printf("Changed directory successfully\n");
	}
	else
	{
		perror("chdir");
		printf("failed to change directory\n");
	}

	return (0);
}
