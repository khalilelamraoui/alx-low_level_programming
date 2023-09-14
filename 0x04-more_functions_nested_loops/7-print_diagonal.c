#include "main.h"
/**
 * print_diagonal - Prints n lines.
 *
 * Description: This function prints 'n' lines,
 *              followed by a newline character after each set of lines.
 * @n: number of lines
 * Return: Always 0 (success).
 */
void print_diagonal(int n)
{
	int spaces, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
