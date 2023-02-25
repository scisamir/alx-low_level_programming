#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int i, j, k, l, m, n, p;
	int first_hr_num, second_hr_num, first_min_num, second_min_num;

	for (i = 0; i <= 2; i++)
	{
		first_hr_num = i;
		if (i == 2)
		{
			for (j = 0; j <= 3; j++)
			{
				second_hr_num = j;
				for (l = 0; l <= 5; l++)
				{
					first_min_num = l;
					for (m = 0; m <= 9; m++)
					{
						second_min_num = m;
						printf("%d%d:", first_hr_num, second_hr_num);
						printf("%d%d\n", first_min_num, second_min_num);
					}
				}
			}
		} else
		{
			for (k = 0; k <= 9; k++)
			{
				second_hr_num = k;
				for (n = 0; n <= 5; n++)
				{
					first_min_num = n;
					for (p = 0; p <= 9; p++)
					{
						second_min_num = p;
						printf("%d%d:", first_hr_num, second_hr_num);
						printf("%d%d\n", first_min_num, second_min_num);
					}
				}
			}
		}
	}
}
