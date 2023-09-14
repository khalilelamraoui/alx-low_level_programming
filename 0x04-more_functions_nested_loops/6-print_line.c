#include "main.h"
/**
 * print_line - Prints n lines.
 *
 * Description: This function prints 'n' lines,
 *              followed by a newline character after each set of lines.
 * @n: number of lines
 * Return: Always 0 (success).
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	
}
