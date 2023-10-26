#include"main.h"
/**
 * binary_to_uint - Converts a binary number represented as a string to an
 * unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 * Return: The converted unsigned integer or 0 if there are non-binary
 * characters in the string or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
			result = result * 2 + (*b - '0');
		else
			return (0);
		b++;
	}
	return (result);
}
