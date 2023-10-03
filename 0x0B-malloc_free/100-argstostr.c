#include "main.h"
/**
 * argstostr - Concatenates all arguments with newline separators
 * @ac: The argument count
 * @av: An array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, length = 0, id = 0;
	char *arg, *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			length++;
			arg++;
		}
		length++;
	}
	result = (char *)malloc(sizeof(char) * length);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			result[id] = *arg;
			id++;
			arg++;
		}
		result[id] = '\n';
		id++;
	}
	result[id - 1] = '\0';
	return (result);
}
