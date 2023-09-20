#include"main.h"
/**
 * reverse_array - Prints reversed array
 * @a: string to reverse
 * @n: size of string
 * Description: function that reverses a string
 * of n elements
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int tempo;

	while (first < last)
	{
		tempo = a[first];
		a[first] = a[last];
		a[last] = tempo;
		first++;
		last--;
	}
}
