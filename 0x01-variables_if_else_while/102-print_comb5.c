#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	for (firstDigit = 0; firstDigit <= 9; firstDigit++)
	{
		for (secondDigit = 0; secondDigit <= 9; secondDigit++)
		{
			for (thirdDigit = firstDigit; thirdDigit <= 9; thirdDigit++)
			{
				int fourth = (firstDigit == thirdDigit) ? secondDigit + 1 : 0;

				for (fourthDigit = fourth; fourthDigit <= 9; fourthDigit++)
				{
					putchar(firstDigit + '0');
					putchar(secondDigit + '0');
					putchar(' ');
					putchar(thirdDigit + '0');
					putchar(fourthDigit + '0');

					if (!(firstDigit == 9 &&
						secondDigit == 8 &&
						thirdDigit == 9 &&
						fourthDigit == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
