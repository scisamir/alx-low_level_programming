#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i == 8) && (j == 9))
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
