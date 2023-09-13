#include <stdio.h>
/**
 * main - Entry point
 * Description: Finds and prints the first 98 Fibonacci numbers.
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next;
	int count;

	printf("%lu, %lu", first, second);
	for (count = 3; count <= 98; count++)
	{
		next = first + second;

		if (count < 98)
		{
			printf(", %lu", next);
		}
		else
		{
			printf("\n");
		}

		first = second;
		second = next;
		}
	return (0);
}
