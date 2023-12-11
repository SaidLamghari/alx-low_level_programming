#include "main.h"
/**
 * *_strcpy - start of the program  that copies the string pointed
 * @dest: string
 * @src: string
 *
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
