#include "main.h"

/**
* array_range - creates an array of integers containing all the values from
* min (included) to max (included), ordered from min to max
* @min: minimum input
* @max: maximum input
*
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int i = 0, *s;

	if (min > max)
		return (NULL);

	s = malloc(max + 1);
	if (s == NULL)
		return (NULL);

	while (min <= max)
		s[i++] = min++;

	return (s);
}
