#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: the array on which action is to be executed on
 * @size: the size of the array input
 * @action: the function which will act on each element of "array"
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
