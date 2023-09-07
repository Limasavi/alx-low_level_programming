#include <stdio.h>
#include <stdlib.h>

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

void perform_multiplication(int len1, int len2, char *n1, char *n2, int *result)
{
	int i, j;

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--) {
		for (j = len2 - 1; j >= 0; j--) {
			int mul = (n1[i] - '0') * (n2[j] - '0');
			int sum = mul + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
}

void print_result(int len1, int len2, int *result)
{
	int start = 0;
	int i;

	while (start < len1 + len2 && result[start] == 0)
		start++;

	if (start == len1 + len2) {
		printf("0\n");
	} else {
		for (i = start; i < len1 + len2; i++) {
			printf("%d", result[i]);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	char *n1, *n2;
	int len1 = 0, len2 = 0;
	int i;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	n1 = argv[1];
	n2 = argv[2];

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	for (i = 0; n1[i]; i++) {
		if (!is_digit(n1[i])) {
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; n2[i]; i++) {
		if (!is_digit(n2[i])) {
			printf("Error\n");
			return (98);
		}
	}

	result = (int *)malloc(sizeof(int) * (len1 + len2));

	if (result == NULL) {
		printf("Error\n");
		return (98);
	}

	perform_multiplication(len1, len2, n1, n2, result);
	print_result(len1, len2, result);

	free(result);

	return (0);
}
