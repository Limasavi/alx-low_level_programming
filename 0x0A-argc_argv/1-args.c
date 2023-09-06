#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
	(void)argv;
	{
		int count = 0;
		int i;

		for (i = 1; i < argc; i++)
		{
			count++;
		}
		printf("%d\n", count);
	}
	return (0);
}
