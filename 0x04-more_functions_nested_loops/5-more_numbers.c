#include "main.h"
/**
 * more_numbers - start of program
 *
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i > 9)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}

