#include "main.h"
/**
 * get_endianness - Start of function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *ch;
	unsigned int num;

	num = 1;
	ch = (char *) &num;

	if (*ch != 0)
	{

		return (1);

	}
	else
	{

		return (0);
	}
}

