#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
		putchar(i);
	for (int j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
