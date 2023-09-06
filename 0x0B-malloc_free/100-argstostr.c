#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (an array of strings).
 *
 * Return: A pointer to the new concatenated string,
 *         or NULL if ac is 0 or av is NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;
	char *result;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			total_length += _strlen(av[i]) + 1; /* Add 1 for the newline character */
	}

	/* Allocate memory for the concatenated string */
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			j = 0;
			while (av[i][j])
			{
				result[k] = av[i][j];
				k++;
				j++;
			}
			result[k] = '\n'; /* Add newline character */
			k++;
		}
	}

	result[k] = '\0'; /* Null-terminate the concatenated string */

	return (result);
}
