#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int foundDigit = 0;

	while (*s)
	{
		if (*s == '-' && !foundDigit)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (result == INT_MIN / 10 && digit == 8)
			{
				return (INT_MIN);
			}
			else if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit > 8))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 - digit;
			foundDigit = 1;
		}
		else if (foundDigit)
		{
			break;
		}
		s++;
	}

	return (sign * (-result));
}
