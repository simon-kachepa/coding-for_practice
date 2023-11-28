#include "main.h"

int main(void)
{
	char *input = malloc(sizeof(char)*100);

	printf("$ ");
	scanf("%s", input);
	printf("%s\n", input);

	free(input);

	return (0);
}
