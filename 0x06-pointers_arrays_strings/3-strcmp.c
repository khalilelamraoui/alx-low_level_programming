#include"main.h"
/**
 * _strcmp - Prints concatenation of two strings
 * @s1: string to compare
 * @s2: string to compare with
 * description: function that returns < 0 if s1 < s2
 * and 0 if s1=s2 and > 0 if s1 > s2
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
