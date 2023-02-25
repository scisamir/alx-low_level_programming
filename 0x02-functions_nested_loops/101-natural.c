#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: the result of what "main" does; see description
 */

int main(void)
{
	int i, sum;

	for (i = 1024; i > 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}
