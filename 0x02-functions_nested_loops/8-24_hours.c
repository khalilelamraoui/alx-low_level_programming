#include"main.h"
/**
 * jack_bauer - Entry point
 * description: function that prints every minute
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
