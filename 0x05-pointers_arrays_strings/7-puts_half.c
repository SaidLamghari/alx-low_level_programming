#include "main.h"
/**
 * puts_half - start of the program that prints half of a string
 *
 * @str: input of a string
 */
void puts_half(char *str)
{
	int i, j, v;

	i = 0;
	while (str[i])
		i++;
	v = (i / 2);
	if ((i % 2) == 1)
		v = ((i + 1) / 2);
	for (j = v; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
