#include "main.h"
/**
 * *leet - start of the program that encodes a string into 1337
 * @l: string
 *
 * Return: encoded string
 */
char *leet(char *l)
{
	int i, j;
	char *qa = "AEOTL";
	char *la = "aeotl";
	char *nu = "43071";

	i = 0;
	while (l[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (l[i] == qa[j])
				l[i] = nu[j];
			else if (l[i] == la[j])
				l[i] = nu[j];
		}
		i++;
	}
	return (l);
}
