#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: argumets passed to the program
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0, no_num_check = 1;

	while (i < argc)
	{
		if (!(atoi(argv[i])))
		{
			no_num_check++;
		}

		i++;
	}

	if (argc == 1 || no_num_check == argc)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	i = 1;

	while (i < argc)
	{
		while (argv[i]++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
