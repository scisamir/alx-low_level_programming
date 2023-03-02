#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the string to be concatenated to
 * @src: the string to be concatenated
 * @n: the number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int i = 0, j = 0, k = 0, dest_len, src_len, new_len;
        char *new_arr;

        while (dest[i] != '\0')
        {
                new_arr[i] = dest[i];
                i++;
        }


        while (src[j] != '\0')
                j++;

        if (n > j)
                n = j;

        dest_len = i - 1;
        src_len = j;
        new_len = dest_len + n;

        while (k <= new_len)
        {
                if (k > dest_len)
                        dest[k] = src[k - src_len + 1];
                else
                        dest[k] = new_arr[k];

                k++;
        }

        return (dest);
}