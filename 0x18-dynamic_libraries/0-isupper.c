#include "main.h"
/**
 * _isupper - start of program
 * @c: input
 *
 * Return: 0 for uppercase  or 1 otherwise
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
