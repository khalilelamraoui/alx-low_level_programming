#include"main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Description:
 * This program calculates the minimum number of coins required to make
 * change for a given amount of money in cents.
 * It expects one command-line argument representing the amount in cents.
 * If the argument count is not 2, it prints "Error" and returns 1.
 * If the amount is negative, it prints "0" and returns 0.
 * The program uses an array of coin values (25, 10, 5, 2, 1) to calculate
 * the minimum number of coins.
 * Return:
 * - 0 if successful.
 * - 1 if an error occurs (e.g., incorrect number of arguments).
 */
int main(int argc, char *argv[])
{
	int i, cents, coin_count = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
