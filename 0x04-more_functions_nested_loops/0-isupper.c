#include"main.h"
/**
 * _isupper - Entry point
 * description: function that checks if char is lower
 * @c: The int to check
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
