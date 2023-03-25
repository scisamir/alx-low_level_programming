#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dog to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
