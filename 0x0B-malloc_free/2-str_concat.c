#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *str_concat - Start of function that concatenates two strings.
 * @s1: First String
 * @s2: Second String
 * Return: Concat or Null
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *concat;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concat = malloc(len1 + len2 + 1);
	if (concat == 0)
		return (NULL);
	for (i = 0; i <= len1; i++)
		concat[i] = s1[i];
	for (i = 0; i <= len2; i++)
		concat[i + len1] = s2[i];

	return (concat);
}
