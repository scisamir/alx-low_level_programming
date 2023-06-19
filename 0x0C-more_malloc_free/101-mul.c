#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* is_num - checks if input is a number
* @a: the input
*
* Return: 1 if it's a number, otherwise 0
*/

int is_num(char *a)
{
	int i = 0;

	while (a[i++])
	{
		if (!(isdigit(a[i])))
			return (0);
	}

	return (1);
}

/**
* main - multiplies two positive numbers
* @argc: program argument count
* @argv: program argument array
*
* Return: EXIT_SUCCESS if success otherwise 98
*/

int main(int argc, char *argv[])
{
	int res;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(is_num(argv[1]) || !(is_num(argv[2]))))
	{
		printf("Error\n");
		exit(98);
	}

	res = (atoi(argv[1])) * atoi((argv[2]));
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}
