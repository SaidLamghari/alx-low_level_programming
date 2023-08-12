#include <stdio.h>
/**
 * main - start of the program
 *
 * Return: Always 0.
*/
int main(void)
{
	char cl = 'a';
	char cu = 'A';

	while (cl <= 'z')
	{
		putchar(cl);
		cl++;
	}
	while (cu <= 'Z')
	{
		putchar(cu);
		cu++;
	}
	putchat('\n');
	return (0);
}
