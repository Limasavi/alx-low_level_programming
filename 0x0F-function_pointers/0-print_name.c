#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a specified printing function.
 * @name: The name to be printed.
 * @f: The printing function to use.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
