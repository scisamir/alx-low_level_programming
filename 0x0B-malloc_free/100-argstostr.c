#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments to the program
 * @av: array containing the string arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	len += ac + 1;

	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	return (str);
}
