#include "main.h"
/**
 * len - start of function calculate a length
 * @s: string
 * Return: length
 */
int len(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * pl - palindrome
 * @s: string
 * @l: start
 * @f: end
 * Return: palindrome
 */
int pl(char *s, int l, int f)
{
	if (l >= f)
		return (1);
	if (s[l] == s[f])
		return (pl(s, l + 1, f - 1));
	return (0);
}

/**
 * is_palindrome - start of function that returns 1
 *			if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int l, f;

	l = 0;
	f = len(s) - 1;

	return (pl(s, l, f));
}
