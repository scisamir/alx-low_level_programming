#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the number of arguments passed into it
 * @argc: number of arguments passed to the program
 * @argv: argumets passed to the program
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
