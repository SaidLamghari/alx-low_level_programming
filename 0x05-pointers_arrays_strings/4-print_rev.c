#include "main.h"
/**
 * print_rev - start of the program that prints a string in reverse.
 * @s: input of string
 */
void print_rev(char *s)
{
	int i, j = 1;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
