#include <stdlib.h>
#include <stdio.h>
/**
 * main - Start of program that prints the opcodes of its own main function.
 * @argc: Number of arguments
 * @argv: Arg vector
 * Return: 0 or 1 or 2
 */
int main(int argc, char *argv[])
{
	int i, num;
	char *point;

	point = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num; i++)
	{
		printf("%02hhx", point[i]);

		if (i != num - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
