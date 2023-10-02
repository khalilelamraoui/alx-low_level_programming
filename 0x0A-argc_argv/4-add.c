#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Description:
 * This program adds positive numbers passed as command-line arguments and prints the result.
 * If no number is passed, it prints 0.
 * If any argument contains non-digit characters, it prints "Error" and returns 1.
 * Return:
 * - 0 if successful.
 * - 1 if an error occurs (e.g., incorrect number of arguments or non-digit characters).
 */
int main(int argc, char *argv[]) {
	int i, sum = 0;
	char *currentArg, *ptr;
	long currentNum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		currentArg = argv[i];
		currentNum = strtol(currentArg, &ptr, 10);

		if (*ptr != '\0' || currentNum <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)currentNum;
	}
	printf("%d\n", sum);
	return (0);
}
