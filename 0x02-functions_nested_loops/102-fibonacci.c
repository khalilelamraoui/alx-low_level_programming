#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 50 Fibonacci numbers
 * separated by comma and space, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	long int first = 1, second = 2, next;
	
	for (count = 0; count < 50; count++)
	{
		if (count == 49)
		{
			printf("%ld\n", first);
		}
		else
		{
			printf("%ld, ", first);
		}

		next = first + second;
		first = second;
		second = next;
	}

	return (0);
}
