#include "main.h"
/**
 * *cap_string - start of the program
 *	that capitalizes all words of a string.
 *
 * @cs: string
 * Return: cs
 */
char *cap_string(char *cs)
{
	int i, j;
	char sw[13] = " \t\n,;.!?\"(){}";

	i = 0;

	while (cs[i])
	{
		if (i == 0)
		{
			if (cs[i] >= 97 && cs[i] <= 122)
				cs[i] = cs[i] - 32;
		}
		j = 0;
		while (j < 13)
		{
			if (cs[i] == sw[j])
			{
				if (cs[i + 1] >= 97 && cs[i + 1] <= 122)
					cs[i + 1] = cs[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (cs);
}
