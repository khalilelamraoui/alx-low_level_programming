#include"main.h"
/**
 * _isdigit - Checks if a string consists of digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
int multiply(char *num1, char *num2)
{
	int result = 0, carry = 0, i, j;
	int len1 = 0, len2 = 0, *res;
	int digit2, digit1, product;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	res = malloc((len1 + len2) * sizeof(int));
	if (res == NULL)
		exit(98);
	for (i = 0; i < len1 + len2; i++)
		res[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			product = digit1 * digit2 + res[i + j + 1] + carry;
			carry = product / 10;
			res[i + j + 1] = product % 10;
		}
		res[i] += carry;
	}
	for (i = 0; i < len1 + len2; i++)
		result = result * 10 + res[i];
	free(res);
	return (result);
}
/**
 * main - check the code for
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(argv[1], argv[2]);
	printf("%d\n", result);
	return (0);
}
