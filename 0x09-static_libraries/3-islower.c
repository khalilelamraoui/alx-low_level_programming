#include"main.h"
/**
 * _islower - Entry point
 * description: function that checks if char is lower
 * @c: The int to check
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
