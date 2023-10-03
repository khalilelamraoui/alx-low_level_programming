#include "main.h"
/**
 * argstostr - Concatenates all arguments with newline separators
 * @ac: The argument count
 * @av: An array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av) {
	int i, length = 0, id = 0;
	char *arg, *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++) {
		arg = av[i];
		while (*arg != '\0')
		{
			length++;
			arg++;
		}
		length++;
	}
	length += strlen(av[0]) + 1;
	result = malloc((length + 1) * sizeof(char));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	strcpy(result, av[0]);
	id = strlen(av[0]);

	for (i = 1; i < ac; i++)
	{
		result[id] = '\n';
		id++;
		arg = av[i];
		while (*arg != '\0')
		{
			result[id] = *arg;
			id++;
			arg++;
		}
	}
	result[id] = '\0';
	return (result);
}
