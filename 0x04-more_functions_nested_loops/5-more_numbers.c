#include "main.h"
/**
 * more_numbers - start of program
 *
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 2)
	{
		for (j = 10; j <= 19; j++)
		{
			if (i == 1)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		i++;
	}
	_putchar('\n');
}

