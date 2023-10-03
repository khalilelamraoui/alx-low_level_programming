#include"main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 *
 * Return: pointer of array of chars -copy of str-
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';
	return (ptr);
}
