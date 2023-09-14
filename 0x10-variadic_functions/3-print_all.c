#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Start of function that prints anything.
 * @format: ist of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *separator = "";
	va_list arg;
	char *pt;

	va_start(arg, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				{
					pt = va_arg(arg, char*);
					if (pt == NULL)
						pt = "(nil)";
					printf("%s%s", separator, pt);
				}
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
