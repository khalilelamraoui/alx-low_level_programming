#include"main.h"
/**
 * _puts - Prints string
 * @str: The string for length calculation
 * description: function that prints string followed by new line
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
