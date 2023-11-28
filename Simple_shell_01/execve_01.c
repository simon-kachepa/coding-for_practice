#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *argv[] = {"ls","-l", NULL};
	char *env[] = {"NULL"};

	if(execve("/usr/bin/ls", argv, env) == -1)
	{
		perror("Failed to execute new program\n");
		return (-1);
	}

	printf("Executed successflly\n");

	return (0);
}
