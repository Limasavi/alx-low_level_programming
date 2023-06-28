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
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (sign == 1)
				result = result * 10 + (s[i] - '0');
			else
				result = result * 10 - (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	return result;
}
