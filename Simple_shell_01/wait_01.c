#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t mypid;
	int hold;

	mypid = fork();
	if (mypid == -1)
	{
		perror("Failed to create a new process\n");
		return (-1);
	}
	if (mypid == 0)
	{
		printf("I'm the child process\n");
		sleep(3);
	}
	else
	{
		wait(&hold);
		printf("I'm the parent process\n");
	}
	return (0);
}
