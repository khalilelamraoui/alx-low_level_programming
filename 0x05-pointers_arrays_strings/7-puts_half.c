#include"main.h"
/**
 * puts_half - Prints string
 * @str: The string for length calculation
 * description: function that prints half-string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= len / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
