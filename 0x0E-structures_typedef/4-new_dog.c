#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog input
 * @age: age of dog input
 * @owner: owner of dog input
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;
	i += 1;

	my_dog->name = malloc(sizeof(char) * i);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	else
		my_dog->name = name;

	my_dog->age = age;

	i = 0;
	while (owner[i] != '\0')
		i++;
	i += 1;

	my_dog->owner = malloc(sizeof(char) * i);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	else
		my_dog->owner = owner;

	return (my_dog);
}
