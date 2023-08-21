#include "main.h"
/**
 * print_rev - start of the program that prints a string in reverse.
 * @s: input of string
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (s[j])
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
