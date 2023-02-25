#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, times_val;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times_val = i * j;
			if (j == 9)
				printf("%d", times_val);
			else if (j < 9 && times_val < 10)
				printf("%d,  ", times_val);
			else
				printf("%d ", times_val);
		}
		printf("\n");
	}
}
