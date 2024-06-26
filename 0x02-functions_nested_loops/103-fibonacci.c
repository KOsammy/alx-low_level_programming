#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *   Finds the sum of even-valued terms in Fibonacci sequence
 *   up to 4,000,000 and prints it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int fib1 = 1, fib2 = 2, next, sum = 2; /* Initialize sum with first even number 2 */
    
    while (fib2 <= 4000000)
    {
        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
        
        if (fib2 % 2 == 0)
            sum += fib2;
    }
    
    printf("%ld\n", sum);
    
    return (0);
}

