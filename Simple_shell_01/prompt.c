#include "main.h"

int main(void)
{
	char *input = NULL;
	size_t buf_size = 0;

	printf("$ ");
	getline(&input, &buf_size, stdin);
	printf("%s", input);

	return (0);
}
