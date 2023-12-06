#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * _getenv(const char *name)
{
	extern char **environ;
	char *token;
	int i = 0;

	while (environ[i])
	{
		token = strtok(environ[i], "=");

		if (strcmp(token, name) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}

	return (NULL);


}
int main(void)
{
	char *home_value = _getenv("HOME");
	
	printf("%s\n", home_value);
	return (0);
}
