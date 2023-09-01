#include <stdio.h>
#include <stdlib.h>
/**
 * main - Start of the program that multiplies two numbers.
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
