#include "shell.h"

/**
 * _strcpy - Function that copies a string
 * @dest: Pointer to the destination
 * @src: Pointer to the source
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	if (dest == src || src == 0)
		return (dest);
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (dest);
}

/**
 *_puts - Function that prints an input string
 *@str: The string to be printed
 * Return: void (Nothing)
 */
void _puts(char *str)
{
	int index;

	if (!str)
		return;
	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
}

/**
 * _putchar - Function that prints a character
 * @c: The char to be printed
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _strdup - Function that duplicate a string
 * @str: The string to duplicated
 * Return: Pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *res;

	if (str == NULL)
	return (NULL);
	while (*str++)
		length++;
	res = malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	for (length++; length--;)
		res[length] = *--str;
	return (res);
}
