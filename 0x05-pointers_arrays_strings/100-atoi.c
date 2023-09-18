#include "main.h"
/**
* _atoi - converts string to ints
* @s: string to change
*
* Return: result
*/
int _atoi(char *s)
{
	int i = 0, minus = 0, result = 0;
	int len = 0, is_digit = 0, digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && is_digit == 0)
	{
		if (s[i] == '-')
			++minus;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (minus % 2)
				digit = -digit;
			result = result * 10 + digit;
			is_digit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			is_digit = 0;
		}
		i++;
	}

	if (is_digit == 0)
		return (0);

	return (result);
}
