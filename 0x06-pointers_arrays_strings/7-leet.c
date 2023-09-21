#include "main.h"
/**
* leet - entry-point
* @str: string
* Description: function that converts aetolAETOL
* to 4307143071 respectively
* Return:returns changed values of aeotlAEOTL
*/
char *leet(char *str)
{
	int i, j;
	char letters[10] = "AEOTLaeotl";
	char numbers[10] = "4307143071";

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
