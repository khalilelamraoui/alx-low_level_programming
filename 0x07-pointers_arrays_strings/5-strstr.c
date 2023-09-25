#include"main.h"
/**
 * _strstr - function taht locates a substring.
 * @haystack: string to search in.
 * @needle: substring wanted.
 *
 * Return: pointer to beginning of located substring,
 * or NULL if substring isn't found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}

			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	return (NULL);
}
