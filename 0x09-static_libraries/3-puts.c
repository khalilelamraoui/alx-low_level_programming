#include"main.h"
/**
 * _puts - Prints string
 * @str: The string for length calculation
 * description: function that prints string followed by new line
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	while (*str != '\0')
	_putchar(*str++);
	_putchar('\n');
}
