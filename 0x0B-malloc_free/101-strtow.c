#include"main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int num_words = 0;
	char **words, *token;
	int i = 0, j = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[j] == ' ')
		j++;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
		{
			num_words++;
			while (str[j] == ' ')
				j++;
		}
	}

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	token = strtok(str, " ");
	while (token != NULL)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
