#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the
 * number 612852475143
 *
 * Return: Nothing
 */

void main(void)
{
	int i, j, test, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}

		if (i % n == 0)
			test = i;
	}

	printf("%d", test);
}
