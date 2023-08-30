#include "main.h"
/**
 * sq - function Recursion
 * @v2: variable
 * @v1: numbre
 * Return: sq
 */
int sq(int v1, int v2)
{
	if (v2 * v2 == v1)
		return (v2);
	else if (v2 * v2 < v1)
		return (sq(v1, v2 + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - start of function that returns
 *			the natural square root of a number.
 * @n: numbre
 * Return: the natural square
 */

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
