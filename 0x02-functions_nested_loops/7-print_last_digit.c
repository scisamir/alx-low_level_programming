#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is to be printed
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
		last_num *= -1;

	_putchar(last_num + '0');
	return (last_num);
}
