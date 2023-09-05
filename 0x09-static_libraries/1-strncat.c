#include "main.h"

/**
 * _strncat - Concatenates a specified number of characters from two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to concatenate
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i = 0;

	while (src[i] && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
