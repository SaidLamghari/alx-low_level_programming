#include "main.h"
/**
 * *string_toupper - start of the program that changes
 *		all lowercase letters of a string to uppercase.
 * @st: string
 * Return: st
 */
char *string_toupper(char *st)
{
	int i;

	i = 0;
	while (st[i])
	{
		if (st[i] >= 97 && st[i] <= 122)
			st[i] = st[i] - 32;
	i++;
	}
	return (st);
}


