#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *malloc_checked - Start of function that allocates memory using malloc.
 * @b: Unsigned int
 * Return: Pointer or Null
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
