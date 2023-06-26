#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: None
 */

void rev_string(char *s)
{
	int c = 0, d = 0;
	char a;

	while (s[d++])
	{
		c++;
	}
	for (d = c - 1; d >= c / 2; d--)
	{
		a = s[d];
		s[d] = s[c - d - 1];
		s[c - d - 1] = a;
	}
}
