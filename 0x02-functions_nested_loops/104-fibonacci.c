#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);

	for (i = 0; i < 98; i++)
	{
		c = a + b;

		if (i == 47)
			printf("%d", c);
		else
			printf("%d, ", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
