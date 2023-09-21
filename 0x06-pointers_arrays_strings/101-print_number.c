#include"main.h"
/**
 * print_number - function that prints a number
 * @n: integer to print
 * Return: Always int
 */
void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar('0' + n1 % 10);
}
