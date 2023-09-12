#include"main.h"
/**
 * print_sign - Entry point
 * description: function that prints sign of num
 * @n: The int to check
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
