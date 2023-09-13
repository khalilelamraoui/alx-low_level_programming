#include <stdio.h>
/**
 * main - Entry point
 * Description: Finds and prints the sum of even-valued terms
 * in the Fibonacci sequence below 4,000,000.
 * Return: 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 2, next;
	long int sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("%ld\n", sum);

	return (0);
}
