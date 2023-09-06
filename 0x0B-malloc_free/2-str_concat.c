#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int total_len;
	int i = 0;
	int j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	total_len = len_s1 + len_s2;

	concatenated = malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (; i < len_s1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len_s2; i++, j++)
		concatenated[i] = s2[j];

	concatenated[total_len] = '\0';

	return (concatenated);
}
