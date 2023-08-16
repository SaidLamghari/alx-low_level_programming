#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - start of program
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98 ; i--)
			printf("%d, ", i);
	else if (n < 98)
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98");
}
