#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: the array
 * @n: the number of items to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
}
