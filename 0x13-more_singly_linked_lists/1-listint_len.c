#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Start of function that returns
 *		the number of elements in a linked listint_t list.
 * @h: Pointer
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
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
