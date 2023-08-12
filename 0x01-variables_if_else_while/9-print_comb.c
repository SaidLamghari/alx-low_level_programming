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
		putchar(i);
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
