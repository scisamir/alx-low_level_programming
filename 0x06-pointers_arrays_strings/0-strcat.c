#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to be concatenated to
 * @src: the string to be concatenated
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
        int i = 0, j = 0, k = 0, dest_len, src_len, new_len;

        while (dest[i] != '\0')
                i++;


        while (src[j] != '\0')
                j++;

        dest_len = i - 1;
        src_len = j;
        new_len = dest_len + src_len;

        while (k <= new_len)
        {
                if (k > dest_len)
                        dest[k] = src[k - src_len + 1];
                else
                        dest[k] = dest[k];

                k++;
        }

        return (dest);
}