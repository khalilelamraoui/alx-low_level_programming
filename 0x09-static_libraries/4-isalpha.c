#include"main.h"
/**
 * _isalpha - Entry point
 * description: function that checks if char is alphabet
 * @c: The int to check
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c > 65 && c < 95) ||
	(c > 97 && c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
