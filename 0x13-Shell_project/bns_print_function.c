#include "bns_shell_header.h"

/**
 * Function that prints the commands to the screen
 */
void bns_print(const char *input)
{
	write(STDOUT_FILENO, &input, bns_strlen(input));
}

/**
 * Function that finds the string length
 */

int bns_strlen(char *str)
{
	int count;

	count = 0;
	while(str[count])
	{
		count+= 1;
	}
	return (count);
}
