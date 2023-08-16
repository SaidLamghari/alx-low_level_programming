#include "main.h"
/**
 * print_times_table - start of program
 *
 * @n: numbre
 *
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				_putchar(',');
				_putchar(' ');
				if (k <= 9)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				}
				if (k > 9 && k < 100)
				{
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				if (k > 99)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
