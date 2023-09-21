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
	int len1 = 0, len2 = 0;
	int i, j, k = 0, num1, num2, sum;
	int carry = 0;
	char temp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
	}
	r[k] = '\0';
	if (k >= size_r)
		return (0);
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
