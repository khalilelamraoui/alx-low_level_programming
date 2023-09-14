#include "main.h"
/**
 * print_square - Prints n square lines.
 *
 * Description: This function prints '#' in 'size' lines,
 *              followed by a newline character after each set of lines.
 * @size: number of lines
 * Return: Always 0 (success).
 */
void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
