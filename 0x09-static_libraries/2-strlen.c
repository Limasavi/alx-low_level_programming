#include "main.h"

/**
 * _strlen - Calculates the length of a string using recursion
 * @s: The string
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return 1 + _strlen(s + 1);
}
