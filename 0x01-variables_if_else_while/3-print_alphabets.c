#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letterLower = 'a', letterUpper = 'A';

	while (letterLower <= 'z')
	{
		putchar(letterLower);
		letterLower++;
	}
	while (letterUpper <= 'Z')
	{
		putchar(letterUpper);
		letterUpper++;
	}
	putchar('\n');

	return (0);
}
