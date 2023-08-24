#include "main.h"
/**
 * *rot13 - start of the program ROT13
 * @r: streng
 * Return: encode
 */
char *rot13(char *r)
{
	int i, j;
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (r[i])
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (in[j] == r[i])
			{
				r[i] = out[j];
				break;
			}
		}
		i++;
	}
	return (r);
}
