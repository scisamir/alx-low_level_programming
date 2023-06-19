#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: the string input
 *
 * Return: the length of the string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i += 1;

	return (i);
}

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
	int i, nl = _strlen(name), ol = _strlen(owner);
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * nl);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		my_dog->name[i] = name[i];

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(char) * ol);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		my_dog->owner[i] = owner[i];

	return (my_dog);
}
