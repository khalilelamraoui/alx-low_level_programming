#include"main.h"
/**
 * _strcat - Prints concatenation of two strings
 * @dest: destination
 * @src: source
 * description: function that returns concatenations
 * of source and destination to destination
 * Return: concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
