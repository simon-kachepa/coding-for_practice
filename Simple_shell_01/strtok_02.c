#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Alx SE is a great program";
	char delim[] = " ";

	char *portion = strtok(str, delim);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, delim);
	}

	return (0);
}
