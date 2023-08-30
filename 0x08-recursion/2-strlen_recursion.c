#include "main.h"

/**
 * _strlen_recursion - strat of function that returns the length of a string
 * @s: string
 * Return: returns the length
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1) + 1;
	}
	return (i);
}

