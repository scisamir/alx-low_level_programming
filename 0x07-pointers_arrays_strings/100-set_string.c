#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a string
 * @to: the string input to be set to
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
