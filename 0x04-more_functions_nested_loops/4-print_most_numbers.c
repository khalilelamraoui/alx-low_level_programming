#include"main.h"
/**
 * print_most_numbers - Entry point
 * description: function for printing numbers
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
