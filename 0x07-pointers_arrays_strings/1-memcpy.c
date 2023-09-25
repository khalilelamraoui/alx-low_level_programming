#include"main.h"
/**
 * _memcpy - function that copies s elements to dest.
 * @src: string to work on
 * @dest: char destination
 * @n: number of first elements wanted
 * Return: result : dest.
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
