#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Alx SE is a great program";
	char delim[] = " ";
	int i;

	char *portion = strtok(str, delim);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, delim);
	}

	for (i = 0; i < 27; i++)
	{
		if (str[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", str[i]);
		}
	}

	printf("\n");

	return (0);
}
