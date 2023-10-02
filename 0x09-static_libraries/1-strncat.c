#include"main.h"
/**
 * _strncat - Prints concatenation of two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * description: function that returns concatenations
 * of source and destination to destination using n bytes
 * Return: concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
