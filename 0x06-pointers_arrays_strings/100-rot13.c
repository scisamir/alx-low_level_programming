#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the pointer to the string to be encoded
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char nm[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == nm[j])
				str[i] = rt[j];
		}
	}

	return (str);
}
