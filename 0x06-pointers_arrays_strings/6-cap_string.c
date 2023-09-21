#include "main.h"
/**
*cap_string - entry-point
*@s: string to capitalize
*Description: function that capitalizes first character
*Return:returns the capitalized string
*/
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 1, j;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= ('a' - 'A');
	}
	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i - 1] == separators[j] &&
			(str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
