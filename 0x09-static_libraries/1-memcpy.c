#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from one memory location to another
 * @dest: Destination memory location
 * @src: Source memory location
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory location (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
