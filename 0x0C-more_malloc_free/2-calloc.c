#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *_calloc - Start of function that allocates
 *				memory for an array, using malloc.
 * @nmemb: Numbre of elements
 * @size: size
 * Return: str or Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, n;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	str = malloc(n);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		str[i] = 0;
	return (str);
}
