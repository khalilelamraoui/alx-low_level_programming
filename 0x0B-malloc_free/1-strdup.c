#include"main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 *
 * Return: pointer of array of chars -copy of str-
 */
char *_strdup(char *str)
{
	int i, j, size;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr = (char *)malloc(sizeof(char) * (i + 1));
	size = i;
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = str[j];
	return (ptr);
}
