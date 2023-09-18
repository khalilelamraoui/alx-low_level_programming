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
	char *dest2 = dest;

	for (i = 0; i != '\0'; i++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
	return (dest2);
}
