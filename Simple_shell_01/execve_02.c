#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char pathname[] = "/usr/bin/ls";
	char *argv[] = {"ls", "-l", NULL};
	char *envv[] = {"NULL"};

	if(execve(pathname, argv, envv) == -1)
	{
		perror("Failed to execute new process\n");
	}

	printf("New process executed successfully\n");

	return (0);
}
