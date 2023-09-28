#include "main.h"
#include <string.h>
/**
 * isPalRec - Recursive helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @a: The starting index of the current comparison.
 * @b: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int isPalRec(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (s[a] != s[b])
		return (0);
	if (a < b + 1)
		return (isPalRec(s, a + 1, b - 1));
	return (1);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}
