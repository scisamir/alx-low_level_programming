#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1, b = 2, c, i;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;

		if (i == 47)
			printf("%lu", c);
		else
			printf("%lu, ", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
