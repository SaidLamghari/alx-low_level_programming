#include "main.h"
/**
 * puts_half - start of the program that prints half of a string
 *
 * @str: input of a string
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		for (j = (i / 2) + 1; j <= i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = ((i - 1) / 2) + 1; j <= i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
