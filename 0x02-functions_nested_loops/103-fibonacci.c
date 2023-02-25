#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of a Fibonacci sequence
 * whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, sum = b;

	while (c <= 4000000)
	{
		c = a + b;

		if (c % 2 ==0)
			sum = sum + c;

		a = b;
		b = c;
	}
	printf("%d\n", sum);

	return (0);
}
