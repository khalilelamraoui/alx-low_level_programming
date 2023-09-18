#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Description: function that converts string to ints
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
    int result = 0;
	int sign = 1;
	int digit;
	int digit_found = 0;

	while (*s)
    {
        if (*s == ' ')
		{
			if (digit_found)
				break;
		}
		else if (*s == '-' || *s == '+')
		{
			if (digit_found)
				break;
			sign = (*s == '-') ? -1 : 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			digit = *s - '0';

			if (result > (2147483647 - digit) / 10)
			{
				if (sign == 1)
					return 2147483647;
				else
					return -2147483648;
			}

			result = result * 10 + digit;
		}
		else if (digit_found)
		{
			break;
		}

		s++;
	}

	return result * sign;
}
