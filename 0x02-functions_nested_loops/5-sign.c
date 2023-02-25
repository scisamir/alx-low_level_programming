#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be tested
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		char pos = "+1";
		return(pos);
	} else if (n == 0)
	{
		char zero = "00";
		return(zero);
	} else
	{
		char neg = "-1";
		return(neg);
	}
}
