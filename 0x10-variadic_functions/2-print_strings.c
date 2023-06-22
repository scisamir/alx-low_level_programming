#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vf;
	char *arg;

	if (separator == NULL)
		separator = "";

	va_start(vf, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(vf, char*);
		if (arg == NULL)
			arg = "(nil)";

		if (i == n - 1)
			printf("%s", arg);
		else
			printf("%s%s", arg, separator);
	}

	va_end(vf);
	printf("\n");
}
