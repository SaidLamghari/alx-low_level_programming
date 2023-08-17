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
				_putchar('1');
			_putchar((j % 10) + '0');
			if (j == 14)
				break;
		}
		i++;
	}
	_putchar('\n');
}

