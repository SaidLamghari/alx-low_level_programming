#include "main.h"
/**
 * _pow_recursion - start of function that returns
 *				the value of x raised to the power of y.
 * @x: the value
 * @y: the power
 * Return: value of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
