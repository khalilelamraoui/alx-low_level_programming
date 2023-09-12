#include"main.h"
/**
 * times_table - Entry point
 * description: function that prints times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10; j++)
		{
			result = (i * j);
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
