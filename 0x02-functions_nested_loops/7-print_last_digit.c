#include"main.h"
/**
 * print_last_digit - Entry point
 * description: function that prints last digit
 * @n: The int to check
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -1 * n;
	_putchar(n + '0');
	return (n);
}
