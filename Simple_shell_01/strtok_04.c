#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "ALX SE Program is great";
	char delim[] = " ";
	char *portion;
	char *_strcpy = malloc(sizeof(char) * strlen(str));

	strcpy(_strcpy, str);

	portion = strtok(_strcpy, delim);

	while(_strcpy != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, delim);
	}


	return (0);
}
