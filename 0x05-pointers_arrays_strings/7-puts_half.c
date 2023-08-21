#include "main.h"
/**
 * puts_half - start of the program that prints half of a string
 *
 * @str: input of a string
 */
void puts_half(char *str)
{
	int a, n, i;

	i = 0;
	while (str[i])
		i++;
	n = (i / 2);
	if ((i % 2) == 1)
		n = ((i + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
