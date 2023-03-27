#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vf;

	if (separator == NULL)
		separator = "";

	va_start(vf, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(vf, int));
		else
			printf("%d%s", va_arg(vf, int), separator);
	}

	va_end(vf);
}
