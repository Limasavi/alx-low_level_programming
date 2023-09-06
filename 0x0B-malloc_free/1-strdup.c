#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: the input string
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL); /* Return NULL if the input string is NULL */

	duplicate = (char *)malloc(strlen(str) + 1); /* Allocate mem forthe dup str */

	if (duplicate == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	strcpy(duplicate, str); /* Copy the string to the newly allocated memory */
	return (duplicate); /* Return the pointer to the duplicated string */
}
