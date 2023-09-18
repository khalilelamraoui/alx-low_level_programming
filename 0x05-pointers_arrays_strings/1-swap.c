#include"main.h"
/**
 * swap_int - Prints swap of two ints.
 * @a: The integer to be swapped.
 * @b: The integer to be swapped
 * description: function that swaps two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;

	*a = *b;
	*b = ptr;
}
