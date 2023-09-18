#include"main.h"
/**
 * print_array - Prints string
 * @a: The string to print
 * @n: size wanted
 * description: function that prints n elements in string
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
