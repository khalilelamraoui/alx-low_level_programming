#include"main.h"
/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i, check = 1;

	if (n <= 1)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			check = 0;
			break;
		}
	}
	if (check)
		return (1);
	else
		return (0);
}
