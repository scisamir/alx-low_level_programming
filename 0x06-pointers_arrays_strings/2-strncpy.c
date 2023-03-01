#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the string to be copied to
 * @src: the string to be copied
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0, j = 0;

        while (src[i] != '\0')
                i++;

        if (n > i)
                n = i - 1;

        while (j < n && src[j] != '\0')
        {
                dest[j] = src[j];
                j++;
        }

        while (j < n)
                dest[j] = '\0';
                j++;

        return (dest);
}