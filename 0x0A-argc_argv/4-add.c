#include <stdio.h>
#include <stdlib.h>

/**
 * check_non_number - checks for a non number
 * @c: number of arguments passed to 'main'
 * @arr: arguments passed to the 'main'
 *
 * Return: same value as 'c' if no number is found among the input
 * otherswise, a number greater than 'c'
 */

int check_non_number(int c, char *arr[])
{
	int i = 1, j, no_num_check = 1;
	char check, check2;

	while (i < c)
	{
		for (j = 0; arr[i][j] != '\0'; j++)
		{
			if (!(arr[i][j] >= '0' && arr[i][j] <= '9'))
			{
				check = arr[i][j + 1];
				if (j >= 1)
				{
					check2 = arr[i][j - 1];
				}

				if (check == '\0')
					no_num_check++;
				else if ((check >= '0' && check <= '9') ||
				(check2 >= '0' && check2 <= '9'))
				{	no_num_check = 100;
					break;
				}
				else
					continue;
			}
		}
		i++;
	}

	return (no_num_check);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: arguments passed to the program
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i, no_num_check, sum;

	no_num_check = check_non_number(argc, argv);

	if (no_num_check == argc)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	else if (no_num_check > argc ||
	(no_num_check > 1 && no_num_check < argc))
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		i = 1, sum = 0;

		while (i < argc)
		{
			sum += atoi(argv[i]);
			i++;
		}
	}

	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
