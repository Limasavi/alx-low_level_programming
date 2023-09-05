#include "main.h"

/**
 * _puts - Prints a string to stdout using recursion
 * @s: The string to print
 */

void _puts(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts(s + 1);
	}
}
