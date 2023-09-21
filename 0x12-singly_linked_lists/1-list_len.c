#include "lists.h"
/**
 * list_len - Start of function that
 *		returns the number of elements in a linked list_t list.
 * @h: Pointer
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
