#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				putchar(thirdDigit + '0');

				if (firstDigit < 7 || thirdDigit < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
