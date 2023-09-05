#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *_strdup - Start of function that returns
 *		a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 * @str: pointer
 * Return: pointer or Null
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *copystr;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	copystr = malloc(size + 1);
	if (copystr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		copystr[i] = str[i];
	return (copystr);
}
