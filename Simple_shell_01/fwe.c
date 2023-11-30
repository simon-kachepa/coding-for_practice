#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t mypid;
	int hold, i;
	char *argv[] = {"ls", "-l", "/tmp", NULL};
	char *envv[] = {"NULL"};

	for (i = 0; i < 5; i++)
	{
		mypid = fork();
		if (mypid == -1)
		{
			perror("Error occured while creating a new process\n");
			return (-1);
		}
	}
	if (mypid == 0)
	{
		if(execve("/usr/bin/ls", argv, envv) == -1)
		{
			perror("Failed to executing a new program\n");
		}
	}
	else
	{
		wait(&hold);
		printf("Done executing the child processes\n");
	}

	return (0);
}
