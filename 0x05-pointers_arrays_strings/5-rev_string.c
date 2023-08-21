#include "main.h"
/**
 * rev_string - start of the program that reverses a string.
 * @s: input string
 *
 */
void rev_string(char *s)
{
	int i, j;
	char var;

	i = 0;

	while (s[i])
		i++;
	for (j = 0; j < (i / 2); j++)
	{
		var = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = var;
	}
}
