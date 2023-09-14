#include "main.h"
/**
 * more_numbers - Prints numbers 10 times from 0 to 14.
 *
 * Description: This function prints numbers 10 times, ranging from 0 to 14,
 *              followed by a newline character after each set of numbers.
 * Return: Always void.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
