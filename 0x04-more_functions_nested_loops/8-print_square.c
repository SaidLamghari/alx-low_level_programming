#include "main.h"
/**
 * print_square - start of the program
 * @size: input
 *
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putcher('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

