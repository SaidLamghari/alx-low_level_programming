#include "main.h"
/**
 * _strlen - start of the prtogram that returns the length of a string.
 * @s: input
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

