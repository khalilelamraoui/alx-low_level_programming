#include"main.h"
/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int s1Len = 0, s2Len = 0, len, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1Len] != '\0')
		s1Len++;
	while (s2[s2Len] != '\0')
		s2Len++;
	len = s1Len + s2Len;
	concat = (char *)malloc(len + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++)
		concat[i] = s1[i];

	for (i = 0; i < s2Len; i++)
		concat[s1Len + i] = s2[i];
	concat[len] = '\0';
	return (concat);
}
