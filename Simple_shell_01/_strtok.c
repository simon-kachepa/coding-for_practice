#include <stdio.h>
#include <string.h>

void _strtok(const char *str, char *delim);

int main(void)
{
	_strtok("The ALX SE Prog is good", " ");

	return (0);
}

void _strtok(const char *str, char *delim)
{
	int len = strlen(str);
	char word[len + 1];
	int i, j = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] == delim || str[i] == '\0')
		{
			word[j] = '\0';
		}
		if (j > 0)
		{
			printf("%s\n", word[j]);
			j = 0;
		}
		else
		{
			word[j] = str[i];;
			j++;
		}
	}
}
