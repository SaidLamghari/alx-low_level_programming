#include "main.h"
/**
 * print_square - start of the program
 * @size: input
 *
 *
 */
void print_square(int size)
{
	int i, j, a;

	a = sqrt(size);

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
			_putchar('#');
		_putchar('\n');
	}
}

