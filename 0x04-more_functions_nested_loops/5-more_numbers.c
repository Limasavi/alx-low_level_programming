#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers
 * Return: 10 times numbers since 0 to 14
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 0)
			{
			_putchar((d / 10) + '0');
			}
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
