#include"main.h"
/**
 * _strchr - function that finds first occurrence of a character
 * and return a pointer to the rest of the string
 * @s: string to work on
 * @c: char wanted to check
 * Return: result : s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
