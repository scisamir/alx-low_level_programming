#ifndef __VARIADIC_FUNCTIONS__
#define __VARIADIC_FUNCTIONS__

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* __VARIADIC_FUNCTIONS__ */
