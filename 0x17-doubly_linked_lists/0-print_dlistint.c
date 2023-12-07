#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - Start of function that prints all the elements of a dlistint_t list.
 * @h: The pointer
 * return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);

		count++;

	}


	return count;
}
