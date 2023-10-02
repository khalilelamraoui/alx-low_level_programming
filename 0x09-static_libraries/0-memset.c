/**
 * _memset - function that replaces s elements with b chars
 * @s: string to work on
 * @b: char wanted to output
 * @n: number of first elements wanted
 * Return: result : s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
