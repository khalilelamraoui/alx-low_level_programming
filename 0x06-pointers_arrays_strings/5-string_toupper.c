#include"main.h"
/**
 * string_toupper - entry point
 * @str: string to uppercase
 * description: function that converts lowercase
 * to uppercase
 * Return: result
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - (97 - 65);
		}
		str++;
	}
	return (ptr);
}
