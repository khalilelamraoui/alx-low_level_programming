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
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (i = 0; i <= 4; i++)
		{
			_putchar('1');
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
