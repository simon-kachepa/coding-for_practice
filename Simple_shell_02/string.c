#include "shell.h"

/**
 * _strlen - Returns the length of a STRING
 * @s: The string whose length to LOOK UP
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - Performs lexicogarphic comparison of two strangs.
 * @s1: The 1ST strang
 * @s2: The 2ND strang
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * _strcat - Concatenates two strings
 * @dest: The destination BUFFER
 * @src: The buffer source
 * Return: Pointer to destination BUFFER
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
/**
 * starts_with - Checks if needle starts with haystack
 * @haystack: String to LOOK UP
 * @needle: The substring to find
 * Return: Address of next char of haystack/NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
	if (*needle++ != *haystack++)
	return (NULL);
	return ((char *)haystack);
}
