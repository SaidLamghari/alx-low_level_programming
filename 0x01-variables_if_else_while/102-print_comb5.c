#include <stdio.h>
/**
 * main - start of program
 * Return: Always 0 (done)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
