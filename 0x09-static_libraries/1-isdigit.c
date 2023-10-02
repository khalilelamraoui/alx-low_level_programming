#include"main.h"
/**
 * _isdigit - Entry point
 * description: function that checks if c is digit
 * @c: The int to check
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
