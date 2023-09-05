#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search
 * @accept: The string containing characters to search for
 *
 * Return: Pointer to the first occurrence of any character in accept in s, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*s == *p)
				return s;
			p++;
		}

		s++;
	}

	return NULL;
}
