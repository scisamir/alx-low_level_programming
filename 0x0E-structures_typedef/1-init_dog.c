#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct dog input
 * @name: name of dog input
 * @age: age of dog input
 * @owner: owner of dog input
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
