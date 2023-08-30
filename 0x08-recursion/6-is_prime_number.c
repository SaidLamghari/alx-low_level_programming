#include "main.h"
/**
 * pr - Function Recursion
 * @v2: Variable
 * @v1: Numbre
 * Return: 1 or 0
 */
int pr(int v1, int v2)
{
	if (v2 == v1)
		return (1);
	else if (v1 % v2 == 0 || v1 <= 1)
		return (0);
	else
		return (pr(v1, v2 + 1));
}

/**
 * is_prime_number - start of function that returns 1
 *					if the input integer is a prime number, otherwise return 0.
 * @n: The input integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (pr(n, 2));
}
