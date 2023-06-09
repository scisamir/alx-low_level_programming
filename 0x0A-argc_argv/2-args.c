#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments passed to the program
 * @argv: argumets passed to the program
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
