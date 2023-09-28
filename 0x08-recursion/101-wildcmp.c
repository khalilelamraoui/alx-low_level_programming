#include"main.h"
/**
 * wildcmp - Compares two strings considering the special character '*'.
 * @s1: The first string.
 * @s2: The second string with the special character '*'.
 *
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return ((*s1 == *s2));
	if (*s1 == *s2 || *s2 == '?')
		return wildcmp(s1 + 1, s2 + 1);
	return (0);
}
