#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers with
 * each element of the grid initialized to 0
 * @width: size of each array in the 2d array
 * @height: number of arrays in the 2d array
 *
 * Return: returns a pointer to a 2 dimensional array of integers or NULL
 * if width or height is 0 or negative or it fails
 */

int **alloc_grid(int width, int height)
{
	int **twod, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(height * sizeof(int *));
	if (twod == NULL)
		return (NULL);

	while (i < height)
	{
		twod[i] = malloc(width * sizeof(int));
		if (twod[i] == NULL)
		{
			while (i >= 0)
				free(twod[i--]);
			free(twod);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			twod[i][j] = 0;
			j++;
		}
		i++;
	}

	return (twod);
}
