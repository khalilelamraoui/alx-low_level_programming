#include"main.h"
/**
 * string_nconcat - Concatenate two strings with a limit on the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	unsigned int total_len = s1_len + n;
	char *result = (char *)malloc(total_len + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_len)
		n = s2_len;
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
