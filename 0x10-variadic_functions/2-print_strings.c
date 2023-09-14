#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - Start of function that prints strings,
 *				followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *p;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char*);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
