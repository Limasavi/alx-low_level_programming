#include "main.h"

/**
 * _strcpy - Copies a string to another using recursion
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	if (*src != '\0')
	{
		*dest = *src;
		_strcpy(dest + 1, src + 1);
	}
	else
		*dest = '\0';

	return dest;
}
