#include"main.h"
/**
 * _strlen - Prints length of string
 * @s: The string for length calculation
 * description: function that prints length of string
 * Return: 0 success
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
