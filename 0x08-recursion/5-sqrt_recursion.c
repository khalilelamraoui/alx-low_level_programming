#include "main.h"
/**
 * _sqrt_recursive - Recursive helper function to calculate square root.
 * @n: The number for which the square root is to be calculated.
 * @low: The lower bound for the guess.
 * @high: The upper bound for the guess.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursive(int n, int low, int high)
{
	int mid;

	if (low > high)
                return (-1);
	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid < n)
		return (_sqrt_recursive(n, mid + 1, high));
	else
		return (_sqrt_recursive(n, low, mid - 1));
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
	return (_sqrt_recursive(n, 1, n));
}
