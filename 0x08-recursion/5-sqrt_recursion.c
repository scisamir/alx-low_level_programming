#include "main.h"

/**
 * _find_sqrt - returns the square root of a number
 * @sq: the sqaure root of the number (starts with 1)
 * @num: the number of whose sqaure root to be found
 *
 * Return: the square root of the number, num
 */

int _find_sqrt(int sq, int num)
{
	if (sq > num)
		return (-1);
	if (sq * sq == num)
		return (sq);
	return (_find_sqrt(++sq, num));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number input
 *
 * Return: the natural square root of a number or -1 if n
 * does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(1, n));
}
