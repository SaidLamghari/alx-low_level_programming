#include "main.h"
/**
 * _islower - start of program
 * @c: the char
 * Return: 1 for lowercase and 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
