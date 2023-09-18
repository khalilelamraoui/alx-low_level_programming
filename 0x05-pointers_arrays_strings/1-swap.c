#include"main.h"
/**
 * swap_int: function to swap two ints
 * @a: first int to swap with @b
 * @b: second int to swap with @a
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;

	*a = *b;
	*b = ptr;
}
