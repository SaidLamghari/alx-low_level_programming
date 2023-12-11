#include "main.h"
/**
 * *_strncat - start of the problem that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: num will use
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
