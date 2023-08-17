#include "main.h"
/**
 * _isdigit - start of program
 * @c: character to check
 *
 * Return: 0 for digit or 1 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
