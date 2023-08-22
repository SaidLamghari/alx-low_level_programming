#include "main.h"
/**
 * _atoi - start of the program that convert a string to an integer.
 * @s: input string
 * Return: numbre or 0
 */
int _atoi(char *s)
{
	int i, j, k, neg;
	unsigned int var;

	i = 0;
	k = 0;
	neg = 1;
	while (s[i])
		i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == '-')
			neg = neg * -1;
		if (s[j] >= '0' && s[j] <= '9')
			var = (var * 10) + s[j] - ('0');
		if (s[j] <= '0' && s[j] >= '9')
			k++;
	}
	if (k == i)
		return (0);
	return (var * neg);
}

