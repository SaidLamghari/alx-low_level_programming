#include "main.h"
/**
 * _strspn - start of function that gets the length of a prefix substring.
 * @s: First string
 * @accept: Second string
 * Return: valur i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (0);
}
