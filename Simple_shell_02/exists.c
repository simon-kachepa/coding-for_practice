#include "shell.h"

/**
 **_strchr - Function that locates a character
 *@s: string
 *@c: character
 *Return: A pointer to the memory area of s
 */
char *_strchr(char *s, char c)
	{
	do {
		if (*s == c)
		return (s);
	} while (*s++ != '\0');

	return (NULL);
}

/**
 **_strncpy - Function that copies a string
 *@dest: Pointer to destination
 *@src: Pointer tosource
 *@n: The number of characters to be copied
 *Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - Function that concatenate two strings
 *@dest: Pointer to destination string
 *@src: Pointer to the source string
 *@n: The number of  of bytes
 *Return: The concatenation result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++, j++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}

	return (s);
}
