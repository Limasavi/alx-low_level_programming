#include "main.h"
/**
 * _strlen_recursion - print strng length
 * @s: string
 * Return:(str - s)
 */

int _strlen_recursion(char *s)
{
	char *str = s;

	while (*str)

		++str;

	return (str - s);
}
