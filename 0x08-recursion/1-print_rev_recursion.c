#include <unistd.h>
#include "main.h"
/**
 * _print_rev_recursion - prints in reverse.
 * @s: string
 * return: none
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	write(1, s, 1);
}
