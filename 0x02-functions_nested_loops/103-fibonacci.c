#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of a Fibonacci sequence
 * whose values do not exceed 4,000,000
 *
 * Return: Nothing
 */

void main(void)
{
	int a = 1, b = 2, c, i, sum = 3;

	while (c <= 4000000)
	{
		c = a + b;

		sum += c;

		a = b;
		b = c;
	}
	printf("%d\n", sum);
}
