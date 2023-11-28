#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("My Pid before fork is: %d\n", getpid());

	fork();

	printf("My pid after fork() is: %d\n", getpid());

	return (0);
}
