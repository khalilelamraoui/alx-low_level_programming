#include"main.h"
/**
 * print_times_table - Entry point
 * description: function that prints times table
 * @n: number of times
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j <= n; j++)
			{
				result = (i * j);
				if (((result / 10) > 0) && ((result / 10) <= 9))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if ((result / 10) > 9)
				{
					_putchar(' ');
					_putchar(((result / 10) / 10) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
