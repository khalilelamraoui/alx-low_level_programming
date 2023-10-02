#include"main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Description:
 * This function multiplies two command-line arguments and prints the result.
 * It expects exactly two arguments.
 * Return:
 * - 0 if successful.
 * - 1 if an error occurs (e.g., incorrect number of arguments).
 */
int main(int argc, char *argv[])
{
	int args, mul;

	args = argc - 1;
	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
