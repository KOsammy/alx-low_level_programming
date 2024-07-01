#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int digit;
    int prev_result;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0';

            /* Check for overflow before performing addition */
            prev_result = result;
            result = result * 10 + digit;
            
            /* Overflow check */
            if ((result - digit) / 10 != prev_result)
            {
                /* Overflow detected, return appropriate value */
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
        }
        else if (s[i] == '+')
            ; /* Ignore explicit '+' sign */
        else if (result > 0) /* Stop at first non-numeric character after number */
            break;
        i++;
    }

    return result * sign;
}

