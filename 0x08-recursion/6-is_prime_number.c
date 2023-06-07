#include "main.h"

/**
 * _find_prime - checks if a number is prime
 * @test: a test case
 * @num: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int _find_prime(int test, int num)
{
	if (test == num)
		return (1);
	if (num % test == 0)
		return (0);
	return (_find_prime(++test, num));
}

/**
 * is_prime_number - checks for a prime number
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_find_prime(2, n));
}
