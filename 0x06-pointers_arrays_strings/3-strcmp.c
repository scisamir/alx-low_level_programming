#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string input
 * @s2: second string input
 *
 * Return: Returns a negative if s1 < s2, positive if s1 > s2 or
 * zero is s1 is equal to s2
 */

int _strcmp(char *s1, char *s2)
{
        int i = 0, res;

        while (s1[i] == s2[i] && s1[i] != '\0')
                i++;

        res = s1[i] - s2[i];

                return (res);
}