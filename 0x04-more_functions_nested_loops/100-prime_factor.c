#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long largestPrime = -1;
	long divisor = 2;

	while (number != 1)
	{
		if (number % divisor == 0)
		{
			largestPrime = divisor;
			number /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", largestPrime);
	return (0);
}
