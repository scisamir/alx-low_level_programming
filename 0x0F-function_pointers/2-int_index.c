#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array in which the integer is to be searched for
 * @size: size of the array
 * @cmp: a function in which is used to search for an integer
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0 otherwise -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
