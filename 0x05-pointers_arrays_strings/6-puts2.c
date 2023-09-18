#include"main.h"
/**
 * puts2 - Prints string
 * @str: The string for length calculation
 * description: function that prints string followed by new line
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 1)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
