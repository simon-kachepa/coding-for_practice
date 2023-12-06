#include "shell.h"

/**
 * set_alias - Function that sets an alias
 * @info: the struct INFO
 * @str: The string pointer
 * Return: 0/1
 */
int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
	{
		return (1);
	}
	if (!*++p)
	{
		return (set_alias(info, str));
	}

	set_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * _myhistory - Function that displays the history list
 * @info: The str containing potential arg
 *  Return: 0
 */
int _myhistory(info_t *info)
{
	print_list(info->history);

	return (0);
}

/**
 * unset_alias - Function that sets alias to string
 * @info: The parameter struct
 * @str: The string
 * Return: 0
 */
int unset_alias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _strchr(str, '=');
	if (!p)
	{
		return (1);
	}
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
			get_node_index(info->alias, node_starts_with(info->alias,
				str, -1)));
	*p = c;

	return (ret);
}

/**
 * _myalias - Function that mimics the alias builtin (man alias)
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototype.
 *  Return: 0 (Success)
 */
int _myalias(info_t *info)
{
	int i;
	char *p = NULL;
	list_t *node = NULL;

	i = 0;
	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_list(node);
			node = node->next;
		}
		return (0);
	}

	for (i = 1; info->argv[i]; i++)
	{
		p = _strchr(info->argv[i], '=');
		if (p)
		{
			set_alias(info, info->argv[i]);
		}
		else
		{
			print_list(node_starts_with(info->alias, info->argv[i], '='));
		}
	}

	return (0);
}

/**
 * print_alias - Function that prints an alias string
 * @node: the alias node
 * Return: Always 0 on success, 1 on error
 */
int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
	{
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
		{
			_putchar(*a);
			_putchar('\'');
			_puts(p + 1);
			_puts("'\n");
		}
			return (0);
	}

	return (1);
}

