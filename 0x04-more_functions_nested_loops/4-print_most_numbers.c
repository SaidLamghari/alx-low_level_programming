#include "main.h"
/**
 * print_most_numbers - start of the program
 *
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
	}
	_putchar('\n');
}
