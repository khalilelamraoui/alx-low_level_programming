#include "3-calc.h"
/**
 * op_add - Returns the sum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference between two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between the two integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the result of integer division.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Returns the remainder of integer division.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
