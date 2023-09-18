#include"main.h"
/**
 * _strcpy - copy string to another one
 * @dest: The string for copied string
 * @src: The string to copy
 * description: function that copies string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest2 = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest2);
}
