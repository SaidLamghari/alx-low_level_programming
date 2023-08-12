#include <stdio.h>
/**
 * main - Start program
 *
 * Return: 0 (done)
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (i != 48)
		{
			putchar(' ');
		}
		putchar(i);
		if (i != 57)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
