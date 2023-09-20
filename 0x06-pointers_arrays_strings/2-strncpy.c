#include"main.h"
/**
 * _strncpy - entry point
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * description: function that copies src to dest
 * Return: copy version of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
