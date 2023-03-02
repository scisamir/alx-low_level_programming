#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string input
 *
 * Return: the encoded string
 */

char *leet(char *str)
{
	int i = 0, j;
	char lets[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	char nums[6] = {'4', '3', '0', '7', '1', '\0'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lets[j] || str[i] == (lets[j] - 32))
				str[i] = nums[j];
		}
		i++;
	}

	return (str);
}
