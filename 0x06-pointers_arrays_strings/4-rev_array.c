#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a pointer to the array to be reversed
 * @n: number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0, j;

	j = n - 1;

	while (i <= j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
