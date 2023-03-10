#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: argumets passed to the program
 *
 * Return: EXIT_SUCCESS
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
