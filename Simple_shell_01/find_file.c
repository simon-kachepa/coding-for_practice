#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void find_file(char *command)
{
	int file_existence;

	file_existence = access(command, F_OK);
	if (file_existence == 0)
	{
		printf("%s: FILE EXIST\n", command);
	}
	else
	{
		printf("%s: FILE DOESN'T EXIST\n", command);
	}
}

int main(void)
{
	char *buffer;
	size_t buffer_size;
	char *token;

	while (1)
	{
		write(1, "$ ", 3);
		getline(&buffer, &buffer_size, stdin);
		token = strtok(buffer, " \t\n");

		if (strcmp(token, "_which") == 0)
		{
			token = strtok(NULL, " \t\n");
			while (token)
			{
				find_file(token);
				token = strtok(NULL, " \t\n");
			}
		}
		else
		{
			printf("INVALID COMMAND\n");
		}
	}

	return (0);
}
