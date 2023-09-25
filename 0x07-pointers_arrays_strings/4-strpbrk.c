#include"main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to work with
 * @accept: The string that contains bytes to search for.
 *
 * Return: pointer to the byte in s,
 *         NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
