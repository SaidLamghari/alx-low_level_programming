#include "main.h"
/**
 * puts_half - start of the program that prints half of a string
 *
 * @str: input of a string
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (str[i])
		i++;

	k = i / 2;
	if (i % 2 == 1)
		k = ((i + 1) / 2);

	for (j = k; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
