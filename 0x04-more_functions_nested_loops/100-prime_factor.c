#include "main.h"
#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, num;

	i = 1;
	num = 612852475143;
	while (i <= num)
	{
	if (num % i == 0)
	{
		if (num == i)
		{
			printf("%ld\n", i);
			break;
		}
		num = num / i;
	}
	i++;
	}
	return (0);
}
