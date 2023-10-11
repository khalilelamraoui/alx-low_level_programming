#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for the opcode printer program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 1 for argument error, and 2 for negative byte count.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *main_ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
