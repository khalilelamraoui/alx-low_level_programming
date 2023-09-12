#include"main.h"
/**
 * print_alphabet_x10 - Entry point
 * description: function that prints alphabets 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
