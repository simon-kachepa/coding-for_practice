#include "shell.h"

/**
 * bfree - frees a pointer
 * @ptr: Address of the point
 * Return: 1 on success, 0 on failure
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
