#include"main.h"
/**
 * cap_string - entry point
 * @str: string to capitalize
 * description: function that capitalizes string
 * Return: result
 */
char *cap_string(char *str)
{
	int word = 0, i, is_separator, capitalize = 1;
	char separators[] = " \t\n,;.!?\"(){}", current_char;

	while (str[word] != '\0')
	{
		current_char = str[word];
		if (capitalize && current_char >= 'a' && current_char <= 'z')
		{
			str[word] -= 32;
			capitalize = 0;
		}
		else if (!capitalize && current_char == '.')
		{
			capitalize = 1;
        	}
		is_separator = 0;
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (current_char == separators[i])
			{
				is_separator = 1;
				break;
			}
		}
		if (is_separator)
		{
			capitalize = 1;
		}
		word++;
	}
	return (str);
}
