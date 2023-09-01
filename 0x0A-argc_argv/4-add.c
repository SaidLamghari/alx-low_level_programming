#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Start of the program that adds positive numbers.
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, j, add;

	i = 1;
	add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\n'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
