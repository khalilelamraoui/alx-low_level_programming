#include"main.h"
/**
 * _abs - Entry point
 * description: function that returns abs of num
 * @n: The int to check
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
