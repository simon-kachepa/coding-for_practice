#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t new_pid;
	pid_t my_pid;

	printf("Before fork(), my pid is: %d\n", getpid());

	new_pid = fork();

	if (new_pid == -1)
	{
		perror("Failed to create a new process\n");
		return (-1);
	}

	my_pid = getpid();

	printf("My pid is: %d\n", my_pid);

	if (new_pid == 0)
	{
		printf("I'm a child process and my pid is: %d\n", my_pid);
	}
	else
	{
		printf("I'm the father process and my pid is: %d, and my child pid is: %d\n", my_pid, new_pid);
	}

	return (0);
}
