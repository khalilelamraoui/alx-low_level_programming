#include"main.h"
/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of strings containing arguments.
 *
 * Description: This function prints the name of the program.
 * Return: 0 (Always, since it's the main function).
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
