#include <stddef.h>
#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of needle in haystack, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return haystack;

		haystack++;
	}

	return NULL; /* If no match is found. */
}
