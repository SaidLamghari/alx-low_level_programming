#include <stdio.h>
/**
 * main - Start of program
 *
 * Return: 0 (done)
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);	
			}
			if (i + j != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
