#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the
 * number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long int i, j, test, n = 612852475143;

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
	printf("%lld", test);

	return (0);
}
