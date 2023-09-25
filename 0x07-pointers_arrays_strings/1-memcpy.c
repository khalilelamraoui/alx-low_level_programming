#include"main.h"
/*
 * _memcpy: function that returns copy of string
 * @dest: destination
 * @src: source
 * @n: size of elements
 * return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *result = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (result);
}
