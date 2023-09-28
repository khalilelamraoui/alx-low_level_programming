#include "main.h"
/**
 * _sqrt_recursive - Recursive helper function to calculate square root.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess < n)
		return (_sqrt_recursive(n, guess + 1));
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursive(n, 1));
}
