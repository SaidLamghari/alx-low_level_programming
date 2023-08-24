#include "main.h"
/**
 * *leet - start of the program that encodes a string into 1337
 * @le: string
 *
 * Return: encoded string
 */
char *leet(char *le)
{
	int i, j;
	char *qa = "AaEeOoTtLl";
	char *nu = "4433007711";

	i = 0;
	while (le[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (le[i] == qa[j])
				le[i] = nu[j];
		}
		i++;
	}
	return (le);
}
