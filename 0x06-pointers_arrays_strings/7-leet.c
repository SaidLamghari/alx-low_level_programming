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
	char *qa = "AEOTL";
	char *la = "aeotl";
	char *nu = "43071";

	i = 0;
	while (le[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (le[i] == qa[j])
				le[i] = nu[j];
			else if (le[i] == la[j])
				le[i] = nu[j];
		}
		i++;
	}
	return (le);
}
