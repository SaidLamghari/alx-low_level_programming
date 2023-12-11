#include "main.h"
/**
 * _atoi - start of the program that convert a string to an integer.
 * @s: input string
 * Return: number
 */
int _atoi(char *s)
{
	int neg = 1;
	unsigned int var = 0;


	do {
		if (*s == '-')
			neg = neg * -1;
		else if (*s >= '0' && *s <= '9')
			var = (var * 10) + (*s - '0');
		else if (var > 0)
			break;
	} while (*s++);


	return (var * neg);
}
