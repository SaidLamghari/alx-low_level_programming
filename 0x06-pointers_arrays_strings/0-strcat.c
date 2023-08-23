#include "main.h"
/**
 * *_strcat - start of the program that that concatenates two strings.
 * @dest: First string
 * @src: second string
 * Return: the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
