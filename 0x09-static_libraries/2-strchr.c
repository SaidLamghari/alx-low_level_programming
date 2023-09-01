#include "main.h"
/**
 * *_strchr - start of function that locates a character in a string.
 * @s: pointer
 * @c: character
 * Return: r
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
