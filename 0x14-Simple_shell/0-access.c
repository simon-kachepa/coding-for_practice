#include "main.h"

/**
 * main - Entry point
 * Description: Program that illustrates how access function works
 * Return: 0 (Success)
 */

int main(void)
{
	char *file_path = "test.txt";
	int permissions = R_OK; //Checking Read permissions

	/**
	 * prototype for access
	 * access(const * charfile_path, int mode)
	 */
	if (access(file_path, permissions) == 0)
	{
		printf("The file is available and you have the read access\n");
	}
	else
	{
		perror("You dont have the right to read from the specified file\n");
		exit(98);
	}

	return (0);
}
