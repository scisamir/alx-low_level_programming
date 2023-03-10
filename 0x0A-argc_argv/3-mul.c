#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: argumets passed to the program
 *
 * Return: EXIT_SUCCESS or 1 if invalid number of arguments is given
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
