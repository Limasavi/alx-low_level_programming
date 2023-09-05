#include "main.h"

/**
 * _memset - Sets a specified number of bytes in a memory block to a given value
 * @s: Pointer to the memory block
 * @b: Value to set (byte)
 * @n: Number of bytes to set
 *
 * Return: Pointer to the memory block (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
