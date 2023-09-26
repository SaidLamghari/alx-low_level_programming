#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - Start of function
 *			that prints all the elements of a listint_t list.
 * @h: Pointer
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return;

	i = 0;
	while (h != NULL)
	{
		i++;

		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
