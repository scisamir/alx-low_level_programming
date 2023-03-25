#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);
	else
	{
		if ((*d).name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if (!(*d).age)
			printf("(nil)\n");
		else
			printf("Age: %f\n", (*d).age);

		if ((*d).owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
