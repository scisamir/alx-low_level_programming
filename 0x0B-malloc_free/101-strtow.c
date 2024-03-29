#include "main.h"
#include <stdlib.h>

/**
* word_len - finds the length of the a single word in a sentence
* @pos: position of the first letter of the word in the input string 'str'
* @w_len: pointer to the length of the word
* @str: the sentence;
*
* Return: position immediately after the word
*/

int word_len(int pos, int *w_len, char *str)
{
	int len = 0;

	while (str[pos] != ' ' && str[pos] != '\0')
	{
		len += 1;
		pos++;

		if (str[pos] == ' ')
			break;
	}

	*w_len = len;
	return (pos);
}

/**
* word_arr_len - finds the number of words in a string
* @str: the input string
*
* Return: the number of words in a string
*/

int word_arr_len(char *str)
{
	int i, w_len, word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			i = word_len(i, &w_len, str);
			word_count += 1;
		}
		else
			continue;
	}

	return (word_count);
}

/**
* strtow - splits a string into words
* @str: the input string
*
* Return: a pointer to an array containing the splitted words
*/

char **strtow(char *str)
{
	int i, j, k = 0, w_len, word_count;
	char **word_arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = word_arr_len(str);

	word_arr = malloc(sizeof(char *) * (word_count + 1));
	if (word_arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_len(i, &w_len, str);
			word_arr[k] = malloc(sizeof(char) * (w_len + 1));
			if (word_arr[k] == NULL)
			{
				while (k >= 0)
					free(word_arr[k--]);
				free(word_arr);
				return (NULL);
			}

			for (j = 0; j < w_len; j++)
				word_arr[k][j] = str[i++];
			word_arr[k++][j] = '\0';
		}
	}

	word_arr[k] = NULL;
	return (word_arr);
}
