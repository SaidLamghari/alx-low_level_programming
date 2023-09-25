#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Start of function
 *			that prints all the elements of a listint_t list.
 * @h: Pointer
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		i++;

	}
	return (i);
}
