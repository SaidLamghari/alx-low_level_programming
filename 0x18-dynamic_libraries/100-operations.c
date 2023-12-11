#include <stdio.h>
/**
 * add - Start  of function that adds two number
 * @a: First one
 * @b: Second one
 * Return: Sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * div - Start of function that division two number
 * @a: First one
 * @b: Second one
 * Return: Div or 0
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error b = 0");
		return (0);
	}
	else
	{
		return (a / b);
	}
}


/**
 * mod - Start of function that give the rest of division
 * @a: First one
 * @b: Second one
 * Return: Mod or 0
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error b = 0");
		return (0);
	}
	else
	{
		return (a % b);
	}
}


/**
 * sub - Start of substratcs two number
 * @a: First one
 * @b: Second one
 * Return: Sub
 */
int sub(int a, int b)
{
	return (a - b);
}


/**
 * mul - Start of function that multiplies two number
 * @a: First one
 * @b: Second one
 * Return: Mul
 */
int mul(int a, int b)
{
	return (a * b);
}
