#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'z'; /* Start with the last lowercase letter */

    while (letter >= 'a')
    {
        putchar(letter); /* Print the current letter */
        letter--;       /* Move to the previous letter */
    }

    putchar('\n'); /* Print the newline character */
    return (0);
}

