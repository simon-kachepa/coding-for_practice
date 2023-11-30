#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t mypid;

	printf("Message before fork()\n");

	pid = fork();
	if (pid == -1)
	{
		perror("Failed to create a child process\n");
	}
	else
	{
		mypid = getpid();
		printf("Child process created successfully\n");
		printf("My process Id is: %d\n", mypid);
	}
}
