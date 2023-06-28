#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: str
 * Return: int
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
			result = result * 10 + (*s - '0');
			foundDigit = 1;
		}
		else if (foundDigit)
		{
			break;
		}
		s++;
	}

	return sign * result;
}
