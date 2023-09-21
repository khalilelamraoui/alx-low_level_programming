#include <stdio.h>
/**
 * infinite_add - Adds two numbers as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the result buffer
 *
 * Return: A pointer to the result string, or 0 if the result can't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, num1, num2, sum;
	int i = 0, j = 0, k = 0;

	while (n1[i] != '\0' || n2[j] != '\0' || carry)
	{
		num1 = (n1[i]) ? n1[i] - '0' : 0;
		num2 = (n2[j]) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
        
		if (k >= size_r - 1)
			return (0);
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;

		if (n1[i]) i++;
		if (n2[j]) j++;
	}

	r[k] = '\0';

	if (k >= size_r)
		return (0);
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
