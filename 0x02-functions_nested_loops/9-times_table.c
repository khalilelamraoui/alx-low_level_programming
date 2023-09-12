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
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				_putchar('0' + (result / 10));
			}
			_putchar('0' + result % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
