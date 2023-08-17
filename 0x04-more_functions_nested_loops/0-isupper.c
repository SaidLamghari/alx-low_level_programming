#include "main"

/*
 * int _isupper - start of program
 * @c: numbre input
 * Return: Always 1 for uppercase 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
