#include "main.h"

/**
 * _reverse_array - reverses the content of an array of integers
 * @a: a pointer to the array to be reversed
 * @n: number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
        int *temp, i = 0, j, k = 0;
        j = n - 1;

        while (j >= 0)
        {
                *(temp + i) = a[j];
                j--;
                i++;
        }

        while (k < n)
                *(a + k) = temp[i];
}