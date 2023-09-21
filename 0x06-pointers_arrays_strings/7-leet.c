#include "main.h"
/**
* leet - function that encodes in 1337
* @str: string to work on
* Return:returns changed values of aeotlAEOTL
*/
char *leet(char *str)
{
	int i, j;
	char letters[] = "AEOTLaeotl";
	char numbers[] = "4307143071";

	for (i = 0; str[i] != '\n'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
