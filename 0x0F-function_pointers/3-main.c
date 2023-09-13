#include "3-clac.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Start of the program
 * @argc: Numbre arguments
 * @argv: Argement vector
 * Return: O or 98 or 99 or 100
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(a, b));
	return (0);
}
