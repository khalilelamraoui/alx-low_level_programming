#include"main.h"
/**
 * main - Entry point.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing command-line arguments.
 *
 * Description: This function prints the number of command-line arguments
 * (excluding the program name) followed by a newline.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}
