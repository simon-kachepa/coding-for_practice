#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **argv, char **envv)
{
	printf("Adress of environ is: %p\n", environ);
	printf("Address of envv is : %p\n", envv);

	return (0);
}
