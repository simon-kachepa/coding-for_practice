#include "main.h"

int main(void)
{
	char *input = NULL;
	size_t buf_size = 0;
	ssize_t input_length;

	printf("Enter input:");
	input_length = getline(&input, &buf_size, stdin);

	if (input_length != -1)
	{
		printf("You entered:%s", input);
	}

	free(input);
	return (0);
}
