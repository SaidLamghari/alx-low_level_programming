#include "main.h"
/**
 * *_strstr - start of function that locates a substring.
 * @haystack: First string
 * @needle: Second string
 * Return: a pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	if (*needle == '\0')
		return (haystack);
	while (needle[k])
		k++;

	while (haystack[i] != '\0')
	{

		if (haystack[i] == needle[0])
			for (j = 0; haystack[j] == needle[j] && needle[j] != '\0'; j++)
				;
		if (k == j)
			return (haystack + i);
	i++;
	}
	return ('\0');
}
