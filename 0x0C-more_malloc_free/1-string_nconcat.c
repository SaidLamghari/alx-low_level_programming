#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *string_nconcat - Start of function that concatenates two strings.
 * @s1: First string
 * @s2: Second sting
 * @n: Numbre of bytes
 * Return: str or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	i = 0;
	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	str = malloc(len1 + n + 1);
	for (i = 0; i < len1 ; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + i] = '\0';
	return (str);
}
