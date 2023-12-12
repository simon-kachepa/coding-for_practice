#include "shell.h"

/**
 * _strlen - Function that finds the length of a string
 * @str: The string whose length to be found
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int count;

	if (!str)
		return (0);

	count = 0;
	while (*str++)
		count++;
	return (count);
}

/**
 * _strcmp - Function to compare two strings.
 * @str1: The first string
 * @str2: The second string
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}

/**
 * _strcat - Function that concatenates two strings
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * Return: Pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (res);
}
/**
 * starts_with - Funcution that checks if needle starts with haystack
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
