#include "main.h"
/**
 * _atoi - start of the program that convert a string to an integer.
 * @s: input string
 * Return: numbre or 0
 */
int _atoi(char *s)
{
	int neg = 1, i, k;
	unsigned int var = 0;
	
	i = 0;
	k = -1;
	while (s[i])
		i++;

	do {
		if (*s == '-')
			neg = neg * -1;
		else if (*s >= '0' && *s <= '9')
			var = (var * 10) + (*s - '0');
		else if (*s < '0' || *s > 9)
			k++;
	} while (*s++);

	if (i <= k)
		return (0);

	return (var * neg);
}
