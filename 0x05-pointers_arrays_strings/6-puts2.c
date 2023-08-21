#include "main.h"
/**
 * puts2 - srat of the program that prints every other
 * character of a string, starting with the first character.
 * @str: input of a string
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
