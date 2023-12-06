#include "shell.h"

/**
 * interactive - Function that returns true if shell is interactive mode
 * @info: Struct address
 * Return: 1 if the shell is in interactive mode,
 *	: 0 otherwise
 */
int interactive(info_t *info)
{
	if (isatty(STDIN_FILENO) && info->readfd <= 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_delim - Function that checks if character is a delimeter
 * @c: The character
 * @delim: The delimeter string
 * Return: 1 if the character is a delimeter;
 *       : 0 otherwise:
 */
int is_delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim == c)
		{
			return (1);
		}
		delim++;
	}
	return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic,
 *	: 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *_atoi - Function that converts a string to an integer
 *@s: The string to be converted to an integer
 *Return: An integer derived from string
 */
int _atoi(char *s)
{
	int i, sign, flag, output;
	unsigned int result;

	sign = 1;
	flag = 0;
	result = 0;
	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
	}

	if (sign == -1)
	{
		output = -result;
	}
	else
	{
		output = result;
	}

	return (output);
}
