#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: program argument count
 * @argv: programs arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int res;
	char *op1 = "/";
	char *op2 = "%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0 &&
	((strcmp(argv[2], op1) == 0 || strcmp(argv[2], op2) == 0)))
	{
		printf("Error\n");
		exit(100);
	}

	res = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
