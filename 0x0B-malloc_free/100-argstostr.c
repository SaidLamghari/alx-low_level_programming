#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *argstostr - Start of function that concatenates
 *			all the arguments of your program.
 * @ac: numbre
 * @av: arg
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len1, len;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	len1 = 0;
	len = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len1++;
		len1++;
		i++;
	}
	concat = malloc(len1 + 1);
	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[len] = av[i][j];
			len++;
		}
		concat[len] = '\n';
		len++;
		i++;
	}
	concat[len] = '\0';
	return (concat);
}
