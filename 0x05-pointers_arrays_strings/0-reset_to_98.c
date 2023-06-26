#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98
 * @p: parameter to change
 * Return: Nothing
 */

void reset_to_98(int *p)
{
	int n;

	n = 402;
	p = &n;

	_putchar('n');
	_putchar('\n');
	*p = 98;
	_putchar('n');
	_putchar('\n');
}
