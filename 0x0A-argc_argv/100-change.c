#include <stdio.h>
#include <stdlib.h>
/**
 * main - Start of the program that prints the minimum
 *			number of coins to make change for an amount of money.
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, cents;

	i = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents <= 0)
			printf("%d\n", 0);
		while (cents > 0)
		{
			if (cents >= 25)
				cents = cents - 25;
			else if (cents >= 10)
				cents = cents - 10;
			else if (cents >= 5)
				cents = cents - 5;
			else if (cents >= 2)
				cents = cents - 2;
			else
				cents = cents - 1;
			i++;
		}
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
