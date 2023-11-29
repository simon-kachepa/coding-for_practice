#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(void)
{
	size_t cmd_size = 0;
	char *cmd = NULL;
	char *token;
	char **array;
	int hold, i = 0;
	pid_t mypid;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		getline(&cmd, &cmd_size, stdin);
		token = strtok(cmd, "\t\n");
		array = malloc(sizeof(char *) * 1024);

		while(token)
		{
			array[i] = token;
			token = strtok(NULL, "\t\n");
			i++;
		}
		array[i] = NULL;
		mypid = fork();
		if (mypid == -1)
		{
			perror("Failed to create a new process");
		}
		if (mypid == 0)
		{
			if (execve(array[0], array, NULL) == -1)
			{
				perror("Failed to execute new process");
			}
		}
		else
		{
			wait(&hold);
		}

		i = 0;
		free(array);
	}
	return (0);
}
