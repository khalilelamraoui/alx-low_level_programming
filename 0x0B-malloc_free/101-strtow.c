#include"main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int len = strlen(str), num_words = 0, j, i;
	int start = 0, index = 0, length;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;
	}
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			length = i - start;
			if (length > 0)
			{
				words[index] = malloc((length + 1) * sizeof(char));
				if (words[index] == NULL)
				{
					for (j = 0; j < index; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				strncpy(words[index], str + start, length);
				words[index][length] = '\0';
				index++;
			}
			start = i + 1;
		}
	}
	words[num_words] = NULL;
	return (words);
}
