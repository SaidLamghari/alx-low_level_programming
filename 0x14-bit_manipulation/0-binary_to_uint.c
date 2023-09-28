#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Start of  function that converts a binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars
 * Return: The converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	if (b == NULL)
		return (0);
	i = 0;
	num = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = num * 2 + (b[i] - '0');
		i++;
	}
	return (num);
}
