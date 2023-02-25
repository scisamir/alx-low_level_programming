#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table of to be printed
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, times_val;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			times_val = i * j;
			if (j == n)
				printf("%d", times_val);
			else
				printf("%d, ", times_val);
		}
		printf("\n");
	}
}
