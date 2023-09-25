#include"main.h"
/**
 * print_diagsums - Prints sum of diagonals of a square matrix.
 * @a: Pointer to the square matrix (1D array).
 * @size: The size of square matrix.
 */
void print_diagsums(int *a, int size)
{ 
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];
	for (j = 0; j < size; j++)
		sum2 += a[j * size + (size - 1 - j)];

	printf("%d, %d\n", sum1, sum2);
}
