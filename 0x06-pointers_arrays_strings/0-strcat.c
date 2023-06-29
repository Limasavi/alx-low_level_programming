#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the dest string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}
