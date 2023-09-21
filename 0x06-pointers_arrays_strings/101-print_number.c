#include"main.h"
/**
 * print_number - function that prints a number
 * @n: integer to print
 * Return: Always int
 */
void print_number(int n)
{
	int div, modulo;

	division = n / 10;
	modulo = n % 10;
	_putchar('0' + division);
	_putchar('0' + modulo);
	_putchar('\n');
}
