#include"main.h"
/**
 * rev_string - Prints reversed string
 * @s: The string to reverse
 * description: function that reverses string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char r;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		r = s[i];
		s[i] = s[len - 1 -i];
		s[len -1 - i] = r;
	}
}
