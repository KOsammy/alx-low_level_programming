#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor of
 * Return: The largest prime factor of n
 */
long largest_prime_factor(long n)
{
    long largest_prime = -1;
    int i;

    while (n % 2 == 0) {
        largest_prime = 2;
        n = n / 2;
    }

    for (i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            largest_prime = i;
            n = n / i;
        }
    }

    if (n > 2)
        largest_prime = n;

    return largest_prime;
}

int main(void)
{
    long number = 612852475143;
    long largest_prime;

    largest_prime = largest_prime_factor(number);

    printf("%ld\n", largest_prime);

    return (0);
}

