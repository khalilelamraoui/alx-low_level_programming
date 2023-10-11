#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to an integer array
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for which cmp does not return 0
 * or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
