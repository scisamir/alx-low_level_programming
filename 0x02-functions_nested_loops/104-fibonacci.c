#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1, b = 2, c, i;

	printf("%ld, %ld, ", a, b);

	for (i = 0; i < 98; i++)
	{
		c = a + b;

		if (i == 47)
			printf("%ld", c);
		else
			printf("%ld, ", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
