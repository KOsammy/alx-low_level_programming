#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int fib1 = 1, fib2 = 2, next;
    int count;

    printf("%lu, %lu, ", fib1, fib2);
    for (count = 3; count <= 98; count++)
    {
        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
        if (count < 98)
            printf("%lu, ", next);
        else
            printf("%lu\n", next);
    }

    return (0);
}

