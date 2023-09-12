#include"main.h"
/**
 * print_to_98 - Entry point
 * description: function that prints numbers to 98
 * @n: number to count from
 * Return: array of nums (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
