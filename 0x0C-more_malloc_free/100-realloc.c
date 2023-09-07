#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *_realloc - Start of function that reallocates a memory
 *				block using malloc and free
 * @old_size: old size
 * @new_size: new size
 * @ptr: Pointer
 * Return: ptr or Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *copy;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		copy = malloc(new_size);
		if (copy == NULL)
			return (NULL);
		return (copy);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		copy = malloc(new_size);
		if (copy == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			*((char *)copy + i) = *((char *)ptr + i);
	}
		free(ptr);
		return (copy);
}
