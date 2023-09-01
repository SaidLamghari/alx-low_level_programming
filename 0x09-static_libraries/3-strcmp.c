#include "main.h"
/**
 * _strcmp - start of the program that compares two strings.
 * @s1: First string
 * @s2: second string
 * Return: Comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, comp;


	comp = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			comp = s1[i] - s2[i];
			if (comp > 0)
				return (comp);
			else if (comp < 0)
				return (comp);
		}
	}
	return (comp);
}

