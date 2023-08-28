#include "main.h"
/**
 * *_strpbrk - start of function that searches
 *		a string for any of a set of bytes.
 * @s: First string
 * @accept: Second string
 * Return: a pointer to the byte in s that matches one of the bytes or Null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
		i++;
	}
	return ('\0');
}
