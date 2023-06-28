#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password.
 * @length: The length of the password.
 *
 * Return: The generated password.
 */
char *generate_password(int length)
{
    char *password = malloc((length + 1) * sizeof(char));
    int i;

    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < length; i++)
    {
        password[i] = '!' + (rand() % 94); // Printable ASCII characters from '!' to '~'
    }

    password[length] = '\0';

    return password;
}

int main(void)
{
    int password_length = 10; // Length of the password to generate
    char *password;

    srand(time(NULL)); // Seed the random number generator

    password = generate_password(password_length);

    printf("%s\n", password);

    free(password);

    return 0;
}

