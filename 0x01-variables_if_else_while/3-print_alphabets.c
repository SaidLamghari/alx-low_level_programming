#include <stdio.h>
/**
 * main - start of the program
 *
 * Return: Always 0.
*/
int main(void)
{
	char cl = 'a';
	char CU = 'A';

	while (cl <= 'z')
	{
		putchar(cl);
		cl++;
	}
	while (CU <= 'Z')
	{
		putchar(CU);
		CU++;
	}
	putchar('\n');
	return (0);
}
