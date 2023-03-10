#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number of coins to make change for an amount of money
 * @argc: number of arguments passed to the program
 * @argv: argumets passed to the program
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i = 0, coins = 0, test;
	int coin_vals[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	test = atoi(argv[1]);

	while (i < 5)
	{
		if (test >= coin_vals[i])
		{
			coins += test / coin_vals[i];
			test %= coin_vals[i];
		}

		i++;
	}

	printf("%d\n", coins);
	exit(EXIT_SUCCESS);
}
