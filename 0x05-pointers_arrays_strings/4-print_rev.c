#include"main.h"
/**
 * print_rev - Prints reversed string
 * @str: The string to reverse
 * description: function that reverses string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
