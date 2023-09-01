#include "main.h"
/**
 * *_memcpy - start of function that copies memory area.
 * @dest: First pointer
 * @src: second pointer
 * @n: bytes from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
