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
        int s1_len = 0, s2_len = 0;

        while (s1[s1_len] != '\0')
                s1_len++;
        while (s2[s2_len] != '\0')
                s2_len++;

        if (s1_len < s2_len)
                return (-15);
        else if (s1_len > s2_len)
                return (15);
        else
                return (0);
}