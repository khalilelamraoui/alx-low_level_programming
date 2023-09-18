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
	int i;

	for (i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
