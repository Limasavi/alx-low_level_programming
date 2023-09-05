#include "main.h"


/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i = 0;

	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
