#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment
 * of a string consisting of characters in 'accept'.
 * @s: The string to search
 * @accept: The string containing characters to search for
 *
 * Return: The length of the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
			break;
	}

	return count;
}
