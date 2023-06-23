#include "main.h"

/**
 * print_most_numbers -  prints the numbers
 * Return: number 0 to 9 except 2 & 4
 */

void print_most_numbers(void)
{
	int c;

	for (; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
		continue;
	}
	else
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
}
