#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password of 15 characters for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    int random_char;
    int sum = 0;
    char password[16]; /* 15 characters + '\0' */

    srand(time(NULL)); /* Seed the random number generator */

    for (i = 0; i < 15; i++)
    {
        random_char = rand() % (126 - 32 + 1) + 32; /* Generate random ASCII character in the range [32, 126] */
        password[i] = (char)random_char; /* Convert integer to character and store in password array */
        sum += random_char; /* Calculate sum of ASCII values for validation in 101-crackme */
    }
    password[15] = '\0'; /* Null-terminate the password string */

    /* Print the generated password */
    printf("%s\n", password);

    /* Print the sum of ASCII values for validation in 101-crackme */
    printf("%d\n", sum);

    return (0);
}

