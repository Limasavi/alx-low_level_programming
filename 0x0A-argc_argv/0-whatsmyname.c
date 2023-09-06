#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc;
	{
		int i;

		for (i = 0; argv[0][i] != '\0'; i++)
		{
			_putchar(argv[0][i]);
		}
	}
	_putchar('\n');
	return (0);
}
