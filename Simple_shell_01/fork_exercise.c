#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t mypid;
	int hold, i;
	char *argv[] = {"ls", "-l", "/tmp", NULL};
	char *envv[] = {"NULL"};

	printf("Before execve\n");

	mypid = fork();
	if (mypid == -1)
	{
		perror("Failed to create a child process\n");
	}
	if (mypid == 0)
	{
		if (execve("/usr/bin/ls", argv, envv) == -1)
		{
			perror("Failed to execute a new program\n");
					return (-1);
		}
		printf("Execute successfully\n");
		sleep(2);
	}
	else
	{
		wait(&hold);
		mypid = fork();
		if (mypid == 0)
       		 {       
                if (execve("/usr/bin/ls", argv, envv) == -1)
                {
                        perror("Failed to execute a new program\n");
                                        return (-1);
                }
                printf("Execute successfully\n");
                sleep(2);
       		 }
		else
		{
		wait(&hold);
		printf("Done the execution of the child process first\n");
		}
	}
	return (0);
}
