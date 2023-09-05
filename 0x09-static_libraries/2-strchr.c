#include <stddef.h>
#include "main.h"

/**
 * _strchr - Searches for the first occurrence of a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
