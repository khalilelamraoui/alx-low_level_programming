#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    char *l;
	unsigned int counter, b;
	size_t length, add;
	char generatedKey[7] = "      ";

    l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	generatedKey[0] = l[(length ^ 59) & 63];
	for (counter = 0, add = 0; counter < length; counter++)
		add += argv[1][counter];
	generatedKey[1] = l[(add ^ 79) & 63];
	for (counter = 0, b = 1; counter < length; counter++)
		b *= argv[1][counter];
	generatedKey[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], counter = 0; counter < length; counter++)
		if ((char)b <= argv[1][counter])
			b = argv[1][counter];
	srand(b ^ 14);
	generatedKey[3] = l[rand() & 63];
	for (b = 0, counter = 0; counter < length; counter++)
		b += argv[1][counter] * argv[1][counter];
	generatedKey[4] = l[(b ^ 239) & 63];
	for (b = 0, counter = 0; (char)counter < argv[1][0]; counter++)
		b = rand();
	generatedKey[5] = l[(b ^ 229) & 63];
	printf("%s\n", generatedKey);
	return (0);
}