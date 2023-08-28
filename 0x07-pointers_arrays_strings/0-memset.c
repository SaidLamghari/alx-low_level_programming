#include "main.h"
/**
 * *_memset - start of the program that fills memory with a constant byte.
 * @s: the pointer
 * @b: const
 * @n: bytes of the memory area pointed
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
