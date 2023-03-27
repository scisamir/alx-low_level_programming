#include "variadic_functions.c"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *sep = "";
	va_list vf;

	va_start(vf, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(vf, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(vf, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(vf, double));
					break;
				case 's':
					s = va_arg(vf, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	va_end(vf);
	printf("\n");
}
