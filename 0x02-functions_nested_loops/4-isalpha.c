#include "main.h"
/**
 * _isalpha - start of program
 * @c: the char
 * Return: 1 for lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c);
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
