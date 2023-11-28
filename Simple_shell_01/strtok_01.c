#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Alx is a great program";
	char delim[] = " ";

	char *portion1 = strtok(str, delim);
	printf("%s\n", portion1);

	char *portion2 = strtok(NULL, delim);
	printf("%s\n", portion2);

	char *portion3 = strtok(NULL, delim);
        printf("%s\n", portion3);

	char *portion4 = strtok(NULL, delim);
        printf("%s\n", portion4);

	char *portion5 = strtok(NULL, delim);
        printf("%s\n", portion5);

	return (0);
}
