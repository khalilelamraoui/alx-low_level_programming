#include<stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers.
 * Return: 0 (Success)
 */
int main(void)
{
    int count;
    unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib11, fib12, fib22, fib21;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib11 = fib1 / 10000000000;
	fib21 = fib2 / 10000000000;
	fib12 = fib1 % 10000000000;
	fib22 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib11 + fib21;
		half2 = fib12 + fib22;
		if (fib12 + fib22 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fib11 = fib21;
		fib12 = fib22;
		fib21 = half1;
		fib22 = half2;
	}
	printf("\n");
	return (0);
}
